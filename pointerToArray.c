#include <stdio.h>

int main(){
    int n;
    printf("Enter Number of Elements : ");
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        printf("Enter Element : ");
        scanf("%d", &a[i]);
    }

    int *ptr = a;
    for (int i=0; i<n; i++){
        printf("Element at %d index : %d\n", i, *ptr);
        ptr++;
    }

    return 0;
}
