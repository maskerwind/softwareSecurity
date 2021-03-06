#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
void readFile(){
    int fd;
    char* buf;
    int len;

    fd = open("foobar.txt", O_RDONLY);
    if (fd != -1){
        read(fd, &len, sizeof(len));
        if (len < 0){
	    printf("error: negative length\n");
	    return;
        }
    }
    len = len + 1;  
    printf("new_len = %d\n", len);
    buf = malloc(len); 
    read(fd,buf,len);
    buf[len] = '\0';
    close(fd);

    printf("buf:%s\n", buf);
}

int main(int argc, char** argv){
    int fd;
    int len = 2147483647;
    char* val = "ThisIsATest";

    fd = open("foobar.txt", O_CREAT | O_WRONLY);
    if (fd != -1){
	write(fd, &len, sizeof(len));
	write(fd, val, strlen(val));
	close(fd);
    }
    readFile();
    printf("Nothing happened\n");
    return 0;
}

