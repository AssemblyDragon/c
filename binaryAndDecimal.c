#include<stdio.h>

int numberOfDigits(int n){
    int s = 0;
    while (n>0){
        n = n/10;
        s += 1;
    }
    return s;
}

int decimalToBinary(int n){
    if (n <= 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    int prev = decimalToBinary(n/2);
    int digit = numberOfDigits(prev);
    return (n%2 + prev * 10);
}

int power(int n, int m){
    int prod = 1;
    for (int i=0; i<m; i++){
        prod *= n;
    }
    return prod;
}

int binaryToDecimal(int n){
    int s=0;
    int temp;
    int i=0;
    while (n>0){
        s = s + (n%10)*power(2, i);
        n = n/10;
        i++;
    }
    return s;
}

int main(){
    int n;
    printf("Enter Decimal Number : ");
    scanf("%d", &n);
    printf("Binary Equivalent : %d\n", decimalToBinary(n));
    printf("Enter Binary Number : ");
    scanf("%d", &n);
    printf("Decimal Equivalent : %d\n", binaryToDecimal(n));
    return 0;
}
