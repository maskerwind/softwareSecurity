#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 10

int isValid(char* url){
    //Suppose the input url is correct
    return 1;
}

void BadCode (char* url){
    char buff1[MAX_SIZE],  buff2[MAX_SIZE];
    char* out;
    if (! isValid(url))return;
    if (strlen(url) > MAX_SIZE -1){printf("URL too long!"); return;}

    out = buff1;
    do{
        if (*url != ' ') *out++ = *url;
    }while(*url++ != '/');
    printf("url:%s", buff1);
    strcpy(buff2, buff1);
    return;
}

int main(int argc, char** argv){
    BadCode(argv[1]);
    printf("Nothing happens");
    return 0;
}
