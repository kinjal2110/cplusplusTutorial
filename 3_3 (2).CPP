#include<iostream.h>
#include<conio.h>
void sum(int a,int b);
void sum(float a,float b,float c);
void main()
{
	float a,b,c;
	clrscr();
	cout<<"Enter first value:";
	cin>>a;
	cout<<"\nEnter second value:";
	cin>>b;
	cout<<"Sum of integer value is:";
	sum(a,b);
	cout<<"\nsum of float value is:";
	sum(a,b,c);
	getch();
}
void sum(int a,int b)
{
	cout<<a+b;
}
void sum(float a,float b,float c)
{
	c=a+b;
	cout<<c;
}
