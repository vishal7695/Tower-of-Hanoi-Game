#include "structure.h"
#include <stdio.h>
#include <stdlib.h>

void create()
{
    int i,num;
    printf("\n How many plates you want in the tower\n HINT-Keep this no. 6 or below\n Otherwise the games gets too much complicated\n ");

    scanf("%d",&num);

    while(num<1)
    {
        printf("\n Please enter a positive value\n ");
        scanf("%d",&num);
    }

    ptr1=(node*)malloc(sizeof(node));
    start1=ptr1;
 
    for(i=1;i<=num;i++)
    {
        ptr1->info=i;

        if(i!=num)
        {
            ptr1->next=(node*)malloc(sizeof(node));
            ptr1=ptr1->next;
        }

        else
        {
            ptr1->next=NULL;
        }

    }

    start3=NULL;
    start2=NULL;
}

void display()
{
  int i;
  ptr1=start1;
  ptr2=start2;
  ptr3=start3;

  printf("\n Tower 1\n\n ");
  while(ptr1!=NULL)
  {
   i=1;
   while(i<=ptr1->info)
   {
    printf("*");
    i++;
   }
   printf("\n ");
   ptr1=ptr1->next;
  }

  printf("\n Tower 2\n\n ");
  while(ptr2!=NULL)
  {
   i=1;
   while(i<=ptr2->info)
   {
    printf("*");
    i++;
   }
   printf("\n ");
   ptr2=ptr2->next;
  }

  printf("\n Tower 3\n\n ");
  while(ptr3!=NULL)
  {
   i=1;
   while(i<=ptr3->info)
   {
    printf("*");
    i++;
   }
   printf("\n ");
   ptr3=ptr3->next;
  }

  printf("\n");
}

node* deletenode(node *s)
{
 node *p=s;
 s=p->next;
 return(p->next);
}

node* insertnode(node *s,int n)
{
 node *p=s,*nptr;
 nptr=(node*)malloc(sizeof(node));

 if(p==NULL)
 {
  nptr->info=n;
  nptr->next=NULL;
  s=nptr;
  return(nptr);
 }

 else
 {
  nptr->info=n;
  nptr->next=p;
  s=nptr;
  return(nptr);
 }

}
