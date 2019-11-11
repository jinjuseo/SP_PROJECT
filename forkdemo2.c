#include <stdio.h>
#include <unistd.h>

int main(){
printf(my pid is %dn,getpid());
fork();
fork();
fork();
printf(my pid is %dn,getpid());
}
