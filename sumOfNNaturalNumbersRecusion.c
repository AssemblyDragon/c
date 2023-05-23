// Sum of n narutal numbers using recursion

#include<stdio.h>

int sum(int n){
    if (n == 1){
        return 1;
    }
    else return (n + sum(n-1));
}

int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    printf("Sum till n = %d natural numbers is : %d", n, sum(n));
    return 0;
}
