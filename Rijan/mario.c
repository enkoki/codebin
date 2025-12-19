#include <stdio.h>
int heightOfPyramid(int);
void pyramid();

int main(){
    int height, n;
    height = heightOfPyramid(n);
    pyramid(height);
    return 0;
} 
int heightOfPyramid(int height){
    int is_digit, i=1;
    char c, extra;
    printf("Enter the height of pyramid (1-7): ");
    do{
        if(i>1){
            printf("Enter again: ");
        }
        i = 1;
        if (scanf("%d%c", &height, &extra) == 2 && extra == '\n'){
            is_digit = 1;
        } 
        else {
            is_digit = 0;
        }
        if(is_digit == 1){
            if(height < 1 || height >=8){
                printf("Not within the range. ");
                i++;
            }                      
        }
        else{
            while((c = getchar()) != '\n');
            printf("Not a valid number. ");
            i++;
        }
    }while(i>1);
    printf("\n");
    return height;
}
void pyramid(int height){
    int first,middle,last;
    for(int i=2;i<=height+1;i++){
        for(int j=i;j<=height;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            first = 1;
            last = 2*i-1;
            middle = (first+last)/2;
            if(j == middle){
                printf("  ");
            }
            else{
                printf("#");
            }
        }            
        printf("\n");
    }
}