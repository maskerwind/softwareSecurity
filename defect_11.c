#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_BUF 256

void BadCode (char* input){
    short len;
    char buf[MAX_BUF];

    len = strlen(input);
    if (len < MAX_BUF){
        strcpy(buf,input);
    }
}

int main(int argc, char** argv){
    BadCode(argv[1]);
    printf("Nothing happens");
    return 0;
}
