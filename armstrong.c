// Checking if a number is armstrong or not

#include<stdio.h>

int numberOfDigits(int n){
    int s = 0;
    while (n>0){
        n = n/10;
        s += 1;
    }
    return (s);  
}

int power(int n, int m){
    int prod = 1;
    for (int i=0; i<m; i++){
        prod *= n;
    }
    return prod;
}

int armstrong(int n){
    int digit = numberOfDigits(n);
    int copy_n = n, sum = 0;
    for (int i=1; i<=digit; i++){
        sum += power(n%10, digit);
        n = n/10;
    }
    return (copy_n == sum);
}

int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    if (armstrong(n)){
        printf("Number is Armstrong");
    }
    else{
        printf("Number is not Armstrong");
    }
    return 0;
}
