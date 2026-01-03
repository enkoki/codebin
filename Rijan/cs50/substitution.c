// NQXPOMAFTRHLZGECYJIUWSKDVB

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("Usage: ./substitution key\n");
        return 1;
    }

    char *key = argv[1];
    if(strlen(key) != 26){
        printf("Key must contain 26 characters.\n");
        return 2;
    }

    char plaintext[100];
    char ciphertext[100];

    printf("Plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);
    plaintext[strcspn(plaintext, "\n")] = '\0';

    for(int i = 0; plaintext[i]; i++){
        if(isalpha(plaintext[i])){
            int index = toupper(plaintext[i]) - 'A';
            ciphertext[i] = isupper(plaintext[i]) ? toupper(key[index]) : tolower(key[index]);
        } else {
            ciphertext[i] = plaintext[i];
        }
    }

    ciphertext[strlen(plaintext)] = '\0';
    printf("Ciphertext: %s\n", ciphertext);

    return 0;
}