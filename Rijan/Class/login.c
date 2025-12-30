#include <stdio.h>
#include <ctype.h>
int main(){
    int username, password;
    char response;
    do{
        
        printf("\nEnter username : ");
        scanf("%d", &username);
        printf("Enter password : ");
        scanf("%d", &password);

        if(username == 123 && password == 456){
            printf("\nYou have successfully logged in.");
            response = 'N';
        }
        else{
            printf("\nInvalid username or password.");
            printf("\nDo you want to try again? (Y for yes): ");
            scanf(" %c", &response);
            response = toupper(response);
        }  
    }while(response == 'Y');
}