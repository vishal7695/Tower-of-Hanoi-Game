//blocks input after the specified time
#include <sys/select.h> 
#include <sys/time.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <stdio.h>

int stdin_timeout(int n)
{
    fd_set selectset;
   
    //timeout of n secs.
    struct timeval timeout = {n,0}; 
    int ret;
   
    FD_ZERO(&selectset);
    FD_SET(0,&selectset);
   
    ret =  select(1,&selectset,NULL,NULL,&timeout);

    return ret;
}
