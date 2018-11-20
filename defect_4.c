#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void catStdin(){
    char src[9];
    char dest[9];
    char* base_url = "www.ru.nl";

    strncpy(src, base_url, 9);
    printf("src: %s\n", src);
    printf("%d\n", strlen(src));

    strcpy(dest, src);
    printf("dest: %s\n", dest);
    printf("%d\n", strlen(dest));
    return;
}

int main(){
    catStdin();
    printf("Nothing happened\n");
    return 0;
}

