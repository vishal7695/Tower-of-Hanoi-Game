/* stopwatch_timer.c */
#include <pthread.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

static clock_t _current_time = 0;

/* start the timing in another thread */
void* g_start_timer(void *secs)
{
    //printf("Starting thread\n");
    int *seconds = (int*)secs;
    _current_time = clock() + (*seconds) * CLOCKS_PER_SEC;

    /* loop until the 10 seconds has reached */
    while(clock() < _current_time)
    {
    }

    pthread_exit(NULL);
}

/* create the thread */
void start_timer(int seconds)
{
    pthread_t thread_id;
    int *secs;
    *secs=seconds;

    int rc = 0;

    rc = pthread_create(&thread_id, NULL, g_start_timer, (void*) secs);
    pthread_join(thread_id,NULL);

    if(rc)
    {
	printf("=== Error Creating thread\n");
    } 
}


/*
int main()
{
    printf("Start your timers\n");
    
    //start the time and run for 5 seconds
    start_timer(5);

    //Check and display current time
    printf("Timer over\n");

    return 0;
}

*/
