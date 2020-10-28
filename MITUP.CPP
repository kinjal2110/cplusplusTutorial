#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

int cq[size],front=-1,rear=-1,value,x,y;

void Insert(int value)
  {
   if((rear==(size-1) && front==0) || (rear==(front-1)))
    {
     printf("circular queue is overflow");
    }
   else if(rear==-1 && front==-1)
    {
     rear=0;
     front=0;
     cq[size]=value;
    }
    else if(rear==(size-1) && front>0)
     {
      rear=0;
      cq[size]=value;
     }
     else
      {
       rear++;
       cq[size]=value;
      }
     getch();
   }

  int remove1()
   {
     if(rear==-1 && front==-1)
      {
       printf("queue is empty");
      }
     else if(rear==front)
      {
       value=cq[front];
       rear=-1;
       front=-1;
      }
      else if(front==(size-1) && rear>0)
       {
	value=cq[front];
	front=0;
       }
      else
       {
	value=cq[front];



void main()
  {
    int ch,value,x,y;
    while(1)
     {
       clrscr();
       printf("1.Insert \n2.Remove \n3.SEarch \n4.Update \n5.Display \n6.Exit");
       printf("\n Enter your choice");
       scanf("%d",&ch);

       switch(ch)
	{
	 case 1:
		printf("Enter element to insert");
		scanf("%d",&value);
		Insert(value);
		getch();
		break;

	 case 2:
		value=remove1();
		printf("%d is removed element",value);
		getch();
		break;
	 case 3:
		printf("Enter element to search");
		scanf("%d",&x);
		search(x);
		getch();
		break;
	 case 4:
		printf("Enter element to be updated");
		scanf("%d",&x);
		printf("Enter new element");
		scanf("%d",&y);
		update(x,y);
		getch();
		break;
	case 5:
		display();
		getch();
		break;
	case 6:
		exit(1);
	default:
		printf("\n Invalid choice");
		getch();
		break;
	  }
       }
    }
		\

