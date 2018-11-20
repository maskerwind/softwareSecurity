#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void secret(){
    system("cat /etc/passwd");
    return;
}

void copyStdin(){
    char dest[20];
    char* src = "01234567890123456789ABCDEFGHIJKLMNOPQRSTUVW";
    strcpy(dest, src);
    puts(dest);
    return;
}

int main(){
    copyStdin();
    printf("Nothing happened\n");
    return 0;
}

