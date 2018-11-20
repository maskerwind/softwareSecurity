#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

int main(int argc, char** argv){
	FILE* f;
	int fd;
	f = fopen("./asecret.txt","w");
	if (f == NULL){
		perror("could not open file");
		return 1;
	}
	fd = fileno(f);
	if (fd == -1){
		perror("failed to get fd");
		return 1;
	}
	if (fchmod(fd, S_IRUSR | S_IWUSR) != 0){
		perror("failed to chmod");
		return 1;
	}
	fprintf(f, "This is a secret!\n");
	fclose(f);
    return 0;
	
}
