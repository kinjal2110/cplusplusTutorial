/* pointer to array */
#include<iostream.h>
#include<conio.h>
void main()
{
	int a[90],*p;
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<"Enter value of array: ";
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<"Value of array: "<<a[i]<<endl;
	}
	p=&a[1];
	for(i=0;i<5;i++)
	{
		cout<<"pointer variable: "<<*p<<endl;
		p++;
	}
	getch();
}