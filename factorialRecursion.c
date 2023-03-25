 #include<stdio.h>

int factorial(int n){
    int m = 1;
    for (int i=1; i<=n; i++){
        m *= i;
    }
    return m;
}

int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("Factorial : %d", fact);
    return 0;
}
