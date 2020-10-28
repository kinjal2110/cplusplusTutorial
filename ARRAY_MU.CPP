#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int Rear,value,front;
void insert()
 {
   if((Rear==(size-1)&&front==0)||(Rear==(front-1)))
    {
      printf("circular queue is overflow");
    }
   else if(Rear==-1&&front==-1)
    {
     Rear=0;
     front=0;
     circularqueue[Rear]=value;
    }
   else if(Rear==(size-1)&&front>0)
    {
      Rear=0;
      circularqueue[Rear]=value;
    }
   else
    {
     Rear++;
     circularqueue[Rear]=value;
    }
   getch();
 }
