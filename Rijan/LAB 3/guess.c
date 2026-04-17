#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int MAX = 6;
const int MIN = 1;

int main(){
    srand(time(0));
    int answer = rand() % (MAX - MIN + 1) + MIN;
    // printf("%d\n", answer);
    
    int guess;
    printf("Enter your guess: ");
    
    while(1){
        scanf("%d", &guess);
        if(guess > answer){
            printf("Too High!\n");
        }
        else if(guess < answer){
            printf("Too Low!\n");
        }
        else if(guess == answer){
            printf("Correct answer! The number was %d\n", answer);
        }
        else{
            printf("Invalid guess\n");
        }

    }
}