#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main(){
    char* ptr = (char*)malloc(SIZE);
    int abrt = 0;

    scanf("%d", &abrt);

    if (abrt==1){
        free(ptr);
    }
    free(ptr);
    return 0;
}
