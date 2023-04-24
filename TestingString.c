#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char a[10] = "hello";
    char b[10] = {'w', 'o', 'R', '1', 'd'};
    char c[10], d[10];
    printf("%c\n", a[1]);
    printf("%c\n", b[1]);
    char m = 'e';
    int count=0;
    for (int i=0; i<5; i++){
        if (isalnum(b[i])){
            printf("Alnum %c\n", b[i]);
        }
        if (isalpha(b[i])){
            printf("Alpha %c\n", b[i]);
        }
        if (isdigit(b[i])){
            printf("Digit %c\n", b[i]);
        }
        if (islower(b[i])){
            printf("Lower %c\n", b[i]);
        }
        if (isupper(b[i])){
            printf("Upper %c\n", b[i]);
        }
        if (b[i] == 'o'){
            count ++;
        }
    }
    char e = toupper('e');
    strcpy(b, a);
    printf("%s %s %d %c", a, b, count, e);
    printf("Enter C : ");
    scanf("%[^,]s", c);
    c[1] = 'e';
    printf("%s", c);
    return 0;
}
