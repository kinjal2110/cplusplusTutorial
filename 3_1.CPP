#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	void exchange(int &,int &);
	cout<<"Enter any two values:";
	cin>>a>>b;

	cout<<"\nBefore interchange a:"<<a<<"b:"<<b;
	exchange(a,b);

	cout<<"\nAfter interchange: a:"<<b<<"b:"<<b;
	getch();
}
void exchange(int &x.int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}