#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(){

	int fd;
	char line[100];
	
	fgets(line, 100, stdin); printf("%s",line);
	fgets(line, 100, stdin); printf("%s",line);
	fgets(line, 100, stdin); printf("%s",line);

	close(0);
	fd = open("/etc/passwd",O_RDONLY);
	if(fd!=0){
		fprintf(stderr,"Could not open data as fd 0\n");
		exit(1);
	}

	fgets(line, 100, stdin); printf("%s",line);
	fgets(line, 100, stdin); printf("%s",line);
	fgets(line, 100, stdin); printf("%s",line);
}
