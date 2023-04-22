#include <stdio.h>

struct complex
{
    int real;
    int imaginary;
};

struct complex add(struct complex c1, struct complex c2){
    struct complex c3;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    return c3;
}

void display(struct complex c){
    printf("Complex Number : %d + %di\n", c.real, c.imaginary);
}

int main(){

    struct complex c1, c2, c3;

    printf("Enter Real part of 1st complex number : ");
    scanf("%d", &c1.real);
    printf("Enter Imaginary part of 1st complex number : ");
    scanf("%d", &c1.imaginary);


    printf("Enter Real part of 2nd complex number : ");
    scanf("%d", &c2.real);
    printf("Enter Imaginary part of 2nd complex number : ");
    scanf("%d", &c2.imaginary);

    display(c1);
    display(c2);
    c3 = add(c1, c2);
    printf("After Addition\n");
    display(c3);
    

    return 0;
}
