#include<iostream.h>
#include<conio.h>
#define PI 3.14
void area(int a);
void circumference(int c);
void main()
{
	int r;
	clrscr();
	cout<<"Enter value of radius:";
	cin>>r;

	cout<<"\nArea is:";
		area(r);

	cout<<"\nCircum is:";
	circumference(r);
	getch();
}
void area(int a)
{
	float ans;
	ans=PI*a*a;
	cout<<ans;
}
void circumference(int c)
{
	float ans;
	ans=2*PI*c;
	cout<<ans;
}