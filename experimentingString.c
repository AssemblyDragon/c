#include<stdio.h>
#include<string.h>

int main(){
    char a[25], b[25], c[25], d[25];
    printf("Enter String A : ");
    gets(a);
    printf("Enter String B : ");
    gets(b);

    strcpy(c, a);
    printf("\nCopied String A to C : ");
    puts(c);
    strcpy(d, b);
    printf("Copied String B to D : ");
    puts(d);
    
    printf("\nLength of String A : %d\nLength of String B : %d\n", strlen(a), strlen(b));

    if (strcmp(a, b) == 0){
        printf("\nString A and B are equal\n");
    }
    else{
        printf("\nString A and B are not equal\n");
    }

    strrev(a);
    strrev(b);
    printf("\nString A after reversing : ");
    puts(a);
    printf("String B after reversing : ");
    puts(b);

    strcat(c, d);
    printf("\nAfter Concating String C and String D : ");
    puts(c);

    strlwr(d);
    printf("\nLower Case String D : ");
    puts(d);
    strupr(d);
    printf("Upper Case String D : ");
    puts(d);

}
