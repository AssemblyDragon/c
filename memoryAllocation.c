// dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=5;
    int *ptr;
    ptr = (int *)malloc(n*sizeof(int));
    ptr[1] = 1;
    printf("%d", ptr[1]);
    free(ptr);
    return 0;
}
