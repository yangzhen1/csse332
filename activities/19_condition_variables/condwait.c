#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

#include <pthread.h>

/**
 * In this exercises, we will try to again simulate pthread_join using condition
 * variables. We will create a thread and then implement the thread_join
 * function below.
 */

void *
child(void *arg)
{
	/* modify this code to let the parent know the child is done */
	printf("Child\n");
	sleep(5);
	printf("Child completed\n");
	return NULL;
}

/**
 * thread_join - Wait for the thread that we create in main by using a condition
 * variable.
 */
void
thread_join(void)
{
	/* Implement this function */
}

int
main(int argc, char **argv)
{
	pthread_t thread;

	pthread_create(&thread, 0, child, NULL);

	printf("Parent waiting for the child to finish\n");
	thread_join();

	/* done */
	exit(0);
}
