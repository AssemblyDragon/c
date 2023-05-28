// Reversing a sentence using recursion

#include<stdio.h>

void reverse(){
    char c;
    scanf("%c", &c);
    if (c == '\n'){
        return;
    }
    reverse();
    printf("%c", c);
}

int main(){
    printf("Enter a Sentence : ");
    reverse();
    return 0;
}
