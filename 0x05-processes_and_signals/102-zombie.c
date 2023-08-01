#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int infinite_while(void);
/**
 * main - entry point
 * Return: 0 if success
 */
int main(void)
{
	int i;
	pid_t p;

	for (i = 0; i < 5; i++)
	{
		p = fork();
		if (p == NULL)
			return (1);
		printf("Zombie process created, PID: %d", p);
	}
	infinite_while();
	return (0);
}

/**
 * infinite_while - infinite while loop to make the program sleep
 * Return: 0 on success
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
