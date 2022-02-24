#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>



int main(){

	pit_t p;
	p=fork();

	if (p==0) {
	printf("Filho, PID em %d",getpid());
	printf("\nPai, PID em %d",getppid());
	}

	else {
	sleep(10);
	printf("Pai, PID em %d",getpid());
	printf("\nFilho, PID em %d",p);
	}

	return 0;
}
