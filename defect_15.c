#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void logError(char* message, char* addr){
    printf("%s\n", message);
    printf("The address:%s\n", addr);
    return;
}

int main(){
    char* ptr = (char*)malloc(SIZE);
    int abrt, err;

    abrt = 0;
    scanf("%d", &err);

    if (err==1){
        abrt = 1;
        free(ptr);
    }

    if (abrt == 1){
        logError("operation aborted before commit", ptr);
    }
    return 0;
}
