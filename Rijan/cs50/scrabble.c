#include <stdio.h>
#include <ctype.h>
#include <string.h>

const int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int calculate(char []);
int main(){
    char word1[25];
    char word2[25];

    printf("Player 1: ");
    fgets(word1, sizeof(word1), stdin);
    word1[strcspn(word1, "\n")] = '\0';


    printf("Player 2: ");
    fgets(word2, sizeof(word2), stdin);
    word2[strcspn(word2, "\n")] = '\0';

    int score[2] = {calculate(word1), calculate(word2)};

    if(score[0] > score[1]){
        printf("Player 1 wins!\n");
    }
    else if(score[0] < score[1]){
        printf("Player 2 wins!\n");
    }
    else{
        printf("Tie!\n");
    }
    return 0;
}
int calculate(char word[]){
    int score = 0;
    int length = strlen(word);

    for(int i = 0; i < length ; i++ )
    {
        char c = toupper(word[i]);
        if(c >= 'A' && c <= 'Z'){
            score += POINTS[c - 'A'];
        }
    }
    return score;
}