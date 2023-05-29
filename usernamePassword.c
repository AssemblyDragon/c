// Baisc Username and Password

#include<stdio.h>
#include<string.h>

int validateUsername(char u[]){
    if (strlen(u) < 5 || strlen(u) > 20){
        return 0;
    }
    else if (!(u[0] >= 'a' && u[0] <= 'z' || u[0] >= 'A' && u[0] <= 'Z')){
        return 0;
    }
    for (int i=0; i<strlen(u); i++){
        if (!(u[i] >= 'a' && u[i] <= 'z' || u[i] >= 'A' && u[i] <= 'Z' || u[i] >= '0' && u[i] <= '9' || u[i] == '_')){
            return 0;
        }
    }
    return 1;
}

int validatePassword(char p[], char u[]){
    if (strlen(p) < 8 || strlen(p) > 20){
        printf("1");
        return 0;
    }
    else if (strcmp(p, u) == 0){
        printf("2");
        return 0;
    }
    int flag[4] = {0, 0, 0, 0};
    for (int i=0; i<strlen(p); i++){
        if (p[i] >= 'a' && p[i] <= 'z'){
            flag[0] = 1;
        }
        else if (p[i] >= 'A' && p[i] <= 'Z'){
            flag[1] = 1;
        }
        else if (p[i] >= '0' && p[i] <= '9'){
            flag[2] = 1;
        }
        else{
            flag[3] = 1;
        }
    }
    for (int i=0; i<4; i++){
        if (flag[i] == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    char username[30], password[30];
    printf("Username :-\n1)Minimum length : 5\n2)Maximum Length : 20\n3)Must not start with a letter\n4)Can only contain letters, numbers and underscores(_)\n");
    printf("Enter Username : ");
    gets(username);
    printf("\nPassword:-\n1)Minimum Length : 8\n2)Maximum Lenght : 20\n3)Cannot be the same as username\n4)Must contain:-\n\ta)One Uppercase Letter\n\tb)One Lowercase Character\n\tc)One number\n\td)One Special Character\n");
    printf("Enter Password : ");
    gets(password);

    if (validateUsername(username)){
        printf("Username Validated\n");
    }
    else{
        printf("Invalid Username\n");
    }
    if (validatePassword(password, username)){
        printf("Password Validated\n");
    }
    else{
        printf("Invalid Password\n");
    }
    return 0;
}
