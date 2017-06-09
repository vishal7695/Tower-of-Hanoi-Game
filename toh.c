#include<stdio.h>
#include"structure.h"
#include"timer.h"
#include<stdlib.h>

#define INVALID 2

#define TIMER 10

int main()
{
 int x=1,y,m,chk;       //x & y for storing stack no.s
 system("clear");       //m is for storing the the element to be shifted
 intro();
 create();              

 //chk is for checking whether the game is over or not

 while(x!=-1)
 {
  system("clear");
 
  printf("\n The current status of all Towers is\n");
  display();
 
  printf(" Enter the tower no. whose top element you want to shift\n OR Enter -1 if you want to exit\n ");

  x=stdin_timeout(TIMER);

  if(x==0)
  {
      printf(" Timeout\n You lose\n");
      getchar();
      x=-1;
  }

  else
  {
      scanf("%d",&x);
  }

  if(x==1||x==2||x==3)
  {
   printf("\n Enter the tower no. where you want to shift the picked element\n ");

      y=stdin_timeout(TIMER);

      if(y==0)
      {
          printf(" Timeout\n You lose\n");
          getchar();
          x=-1;
      }

      else
      {
          scanf("%d",&y);
      }
  }

  if(x==-1)
  {
   printf("\n\n\n Exiting...\n");
   getchar();
  }

  else if((x!=1&&x!=2&&x!=3)||(y!=1&&y!=2&&y!=3))
  {
   printf("\n Invalid move\n");
   start_timer(INVALID);
   //getchar();
  }

  else if(x==y)
  {
   printf("\n Invalid move\n");
   start_timer(INVALID);
  }

  else
  {
   if(x==1&&y==2)
   {
    ptr1=start1;
    ptr2=start2;

    if(ptr1==NULL)
    {
     printf("\n Invalid move\n");
     start_timer(INVALID);
     //getchar();
    }

    else if(ptr2==NULL)
    {
     m=ptr1->info;
     start1=deletenode(start1);
     start2=insertnode(start2,m);
    }

    else if(ptr1->info>ptr2->info)
    {
     printf("\n Invalid move\n");
     start_timer(INVALID);
     //getchar();
    }

    else
    {
     m=ptr1->info;
     start1=deletenode(start1);
     start2=insertnode(start2,m);
    }

   }

   else if(x==1&&y==3)
   {
    ptr1=start1;
    ptr3=start3;

    if(ptr1==NULL)
    {
     printf("\n Invalid move\n");
     start_timer(INVALID);
     //getchar();
    }

    else if(ptr3==NULL)
    {
     m=ptr1->info;
     start1=deletenode(start1);
     start3=insertnode(start3,m);
    }

    else if(ptr1->info>ptr3->info)
    {
     printf("\n Invalid move\n");
     start_timer(5);
     //getchar();
    }

    else
    {
     m=ptr1->info;
     start1=deletenode(start1);
     start3=insertnode(start3,m);
    }

   }

   else if(x==2&&y==1)
   {
    ptr1=start1;
    ptr2=start2;

    if(ptr2==NULL)
    {
     printf("\n Invalid move\n");
     start_timer(5);
     //getchar();
    }

    else if(ptr1==NULL)
    {
     m=ptr2->info;
     start2=deletenode(start2);
     start1=insertnode(start1,m);
    }

    else if(ptr2->info>ptr1->info)
    {
     printf("\n Invalid move\n");
     start_timer(5);
     //getchar();
    }

    else
    {
     m=ptr2->info;
     start2=deletenode(start2);
     start1=insertnode(start1,m);
    }

   }

   else if(x==3&&y==1)
   {
    ptr1=start1;
    ptr3=start3;

    if(ptr3==NULL)
    {
     printf("\n Invalid move\n");
     start_timer(5);
     //getchar();
    }

    else if(ptr1==NULL)
    {
     m=ptr3->info;
     start3=deletenode(start3);
     start1=insertnode(start1,m);
    }

    else if(ptr3->info>ptr1->info)
    {
     printf("\n Invalid move\n");
     start_timer(INVALID);
     //getchar();
    }

    else
    {
     m=ptr3->info;
     start3=deletenode(start3);
     start1=insertnode(start1,m);
    }

   }

   else if(x==2&&y==3)
   {
    ptr2=start2;
    ptr3=start3;

    if(ptr2==NULL)
    {
     printf("\n Invalid move\n");
     start_timer(INVALID);
     //getchar();
    }

    else if(ptr3==NULL)
    {
     m=ptr2->info;
     start2=deletenode(start2);
     start3=insertnode(start3,m);
    }

    else if(ptr2->info>ptr3->info)
    {
     printf("\n Invalid move\n");
     start_timer(INVALID);
     //getchar();
    }

    else
    {
     m=ptr2->info;
     start2=deletenode(start2);
     start3=insertnode(start3,m);
    }

   }

   else if(x==3&&y==2)
   {
    ptr3=start3;
    ptr2=start2;

    if(ptr3==NULL)
    {
     printf("\n Invalid move\n");
     start_timer(INVALID);
     //getchar();
    }

    else if(ptr2==NULL)
    {
     m=ptr3->info;
     start3=deletenode(start3);
     start2=insertnode(start2,m);
    }

    else if(ptr3->info>ptr2->info)
    {
     printf("\n Invalid move\n");
     start_timer(INVALID);
     //getchar();
    }

    else
    {
     m=ptr3->info;
     start3=deletenode(start3);
     start2=insertnode(start2,m);
    }

   }

  //else part of main if-else ends here
  }
  //The shifting process is completed
  //Now, we have to check whether the game is over or not
  if(x!=-1)
  {
        chk=check();

        if(chk==1)
        {
            x=-1;
            printf("\n\n\n\n           You Won.....!!!\n\n");
            getchar();

            system("clear");
            printf(" Do you want to play again (Y/N)?  ");
            char ch=getchar();

            if(ch=='Y' || ch=='y')
            {
                //restart game
                x=1;

                system("clear");
                create();         
            }

            else
            {
                //exit message
                system("clear");
                printf("\n Exiting this game...\n");
                getchar();
            }
        }
  }

  else if(x==-1)
  {
        system("clear");
        printf(" Do you want to play again (Y/N)?  ");
        char ch=getchar();

        if(ch=='Y' || ch=='y')
        {
            //restart game
            x=1;

            system("clear");
            create();         
        }

        else
        {
            //exit message
            system("clear");
            printf("\n Exiting...\n");
            getchar();
        }
  }

     //while ends here
 }
    
 wrap();

 return 0;
}
