/* WIP
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *rotation = NULL;
    char input[10];
    printf("Enter the rotation (-1 to quit):\n");
    int i = 0;
    while(1){
        scanf("%s", input);
        if(strcmp(input, "-1") == 0) 
            break;
        rotation = realloc(rotation, sizeof(input) * (i+1));
        rotation = strcpy(rotation, input);
        i++;
    }
}
*/
