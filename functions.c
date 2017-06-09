#include "structure.h"
#include <stdio.h>
#include <stdlib.h>

void intro()
{
    printf("\n\n\n\n\t       Welcome to the game of Tower of Hanoi\n");
    printf("\t         Developed by HO DEVELOPERS PVT. LTD.\n");
    printf("\n\n\t     The goal of the game is to move all the disks from the\n");
    printf("\t     leftmost tower to the rightmost tower following these RULES---\n\n");
    printf("\t   1. Move only one disk at a time\n");
    printf("\t   2. A larger disk may not be placed on top of a smaller disk\n");
    
    printf("\n\n\n\t   Hit enter when you are ready to play\n");
   
    getchar();

    system("clear");
    printf("\n\n\n\n\n\n\n\t\t\tHappy gaming.....!!!");

    getchar();
    
    system("clear");
}

int check()
{
    int ch=1;

    if(start1!=NULL||start2!=NULL)
    {
        ch=0;
    }

    return(ch);
}

void wrap()
{
 system("clear");
 printf("\n\n\n\n\t\t\t   A project by\n\n\n");
 printf("\t\t\tVishal Sharma");

 getchar();
 system("clear");
 printf("\n\n\n\n\n\n\n\t\t\tHope you like it");
 getchar();
}
