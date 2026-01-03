#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(char text[]){
    int count = 0;
    for(int i = 0; text[i] != '\0'; i++){
        if(isalpha(text[i])){
            count++;
        }
    }
    return count;
}

int count_words(char text[]){
    int count = 0;
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] == ' ' || text[i] == '\n' || text[i] == '\t'){
            count++;
        }
    }
    return count + 1;
}

int count_sentences(char text[]){
    int count = 0;
    for(int i = 0 ; text[i] != '\0'; i++){
        if(text[i] == '.' || text[i] == '!' || text[i] == '?'){
            count++;
        }
    }
    return count;
}

int main(){
    char text[1000];

    printf("Enter your text:\n");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float L = (float)letters / words * 100;
    float S = (float)sentences / words * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if(index >= 16){
        printf("Grade 16+\n");
    }
    else if(index < 1){
        printf("Before Grade 1\n");
    }
    else{
        printf("Grade %d\n", index);
    }

    return 0;
}
