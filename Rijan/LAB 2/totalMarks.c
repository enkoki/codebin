// Write a program to input marks of five subjects and calculate the total and percentage.

#include <stdio.h>
int main(){
    int marks[5], total = 0;
    printf("Enter your marks obtained in 5 subjects (FULL MARKS: 80)\n");
    for(int i=0;i<5;i++){
        while(1){
            printf("Subject %d: ", i+1);
            scanf("%d", &marks[i]);
            if(marks[i]<0 || marks[i]>80) printf("Invalid please enter again\n");
            else break;
        }
    }
    for(int i = 0;i<5;i++){
        total += marks[i];
    }
    float per = ((float)total/400)*100;
    printf("\nYour total marks is %d.\nYou obtained %.1f",total, per);
    return 0;
}