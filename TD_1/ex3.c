#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
 
int main() {
	//printf("%d\n", RAND_MAX);
	srand(getpid());
	int a,i;
	for(i=0;i<10000;i++){
		a = rand()%1000;
		printf("%d\n", a);
	}
}
