#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	pid_t pid = fork();
	if (pid==0)
	{
		printf("Child\n");
	}
	else if (pid >0)
	{
		printf("parent\n");
	}
	return 0;	
}
