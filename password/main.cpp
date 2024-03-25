#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    const int passwordLength = 15;
    char password [passwordLength + 1];
    char ch;
    int characterPosition = 0;
    const int usernameLength = 15;
    char username [usernameLength +1];
    char con;

    printf("This is an account Creation Simulator.");
    printf("press p for Password or u for username ");
    scanf("%s", &con);

    if (con == 'u'){
        printf("Please Enter A User name Length 1 - %d\n", usernameLength);
            while(1) {
                ch = getch();
                if (ch ==13) {
                    break;
                }else if (ch ==8) {
                    if (characterPosition > 0){
                        characterPosition --;
                        username[characterPosition] = '\0';
                        printf("\b \b");
                        }
                }else if (ch == 32 || ch == 9){
                    continue;
                }else {
                    if (characterPosition < usernameLength) {
                        username[characterPosition] = ch;
                        characterPosition ++;
                        printf ("*");
                    }else{
                        printf("\nU=Your input exceeds maximum Username length of %d. So only first %d character will be cosidered");
                        break;
                    }
                }
            }
        username[characterPosition] = '\0';
        if (strlen(username) ==0){
            printf("No Username Entered");
        }else{
            printf("username is %s", username);
            }
        return 0;




                }



    //**************************************************************//
    if (con == 'p'){
        printf("Please Enter A password Length 1 - %d\n", passwordLength);
            while(1) {
                ch = getch();
                if (ch ==13) {
                    break;
                }else if (ch ==8) {
                    if (characterPosition > 0){
                        characterPosition --;
                        password[characterPosition] = '\0';
                        printf("\b \b");
                        }
                }else if (ch == 32 || ch == 9){
                    continue;
                }else {
                    if (characterPosition < passwordLength) {
                        password[characterPosition] = ch;
                        characterPosition ++;
                        printf ("*");
                    }else{
                        printf("\nU=Your input exceeds maximum password length of %d. So only first %d character will be cosidered");
                        break;
                        }

                    }
            }

     password[characterPosition] = '\0';
     if (strlen(password) ==0){
        printf("No Password Entered");
     }else {
        printf("password is %s", password);
        }
     return 0;

            }

}







