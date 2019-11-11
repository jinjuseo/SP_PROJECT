#include <stdio.h>
#include <stdlib.h>
#define DELAY 2

int main(){

	int newpid;
	void child_code (int), parent_code(int);
	printf("before: mypid is %d\n",getpid());
	
	if((newpid = fork())==-1)
		perror("fork");
	else if(newpid==0)
		child_code(DELAY);
	else
		parent_code(newpid);

	
}
