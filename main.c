#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n Welcome to The Security System");
    int password;
    int FakeInput;
    printf("\n\n Please type your password ");
    scanf("%d", &password);

    if(password <= 12345 && password >= 12345 ){
        printf("\n The password is correct");
        printf("\n Welcome and Thank you for cracking the code");
    }
    else{
        printf("\n The password is incorrect");
        printf("\n You will have 2 more tries!!");
        printf("\n Try again");
        scanf("%d", &password);

   if(password <= 12345 && password >= 12345 ){
        printf("\n The password is correct");
        printf("\n Welcome and Thank you for cracking the code");
    }
    else{
        printf("\n The password is incorrect");
        printf("\n You will have 1 more try!!");
        printf("\n Try again");
        scanf("%d", &password);
        
    if(password <= 12345 && password >= 12345 ){
        printf("\n The password is correct");
        printf("\n Welcome and Thank you for cracking the code");
    }
    else{
        printf("\n The password is incorrect");
    }
    }
    }
    scanf("\n%d", FakeInput);
return 0;
 }
}
