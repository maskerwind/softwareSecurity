#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
void readFile(){
    int fd;
    char* buf;
    int i, len;

    fd = open("foobar.txt", O_RDONLY);
    if (fd != -1){
        read(fd, &len, sizeof(int));
        printf("new_len = %d\n", len);
    }

    buf = malloc(len); 
    read(fd,buf,len);
    close(fd);
}

int main(int argc, char** argv){
    int fd;
    int val = -1;

    fd = open("foobar.txt", O_CREAT | O_WRONLY);
    if (fd != -1){
	write(fd, &val, sizeof(val));
	close(fd);
    }
    readFile();
    printf("Nothing happened\n");
    return 0;
}

