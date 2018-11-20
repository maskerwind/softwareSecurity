#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void secret(){
    system("cat /etc/passwd");
    return;
}

void catStdin(char* path){
    char buf[20];
    char prefix[] = "http://";

    strcpy(buf, prefix);
    strncat(buf, path , sizeof(buf));
    printf("%d\n", strlen(buf));
//    printf("%s", buf);
    return;
}

int main(int argc, char** argv){
    catStdin(argv[1]);
    printf("Nothing happened\n");
}
    
