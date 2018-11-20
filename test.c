#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
    // Open file with write permission (create if doesn't exist).
    int fd = open("float.txt", O_CREAT | O_WRONLY);
    int val = 1;
    if (fd != -1) {
        write(fd, &val, sizeof(val));
        close(fd);
    }

    // Test read.
    fd = open("float.txt", O_RDONLY);
    int new_val;
    if (fd != -1) {
        read(fd, &new_val, sizeof(new_val));
        printf("new_val = %d\n", new_val);
        close(fd);
    }
    return 0;
}
