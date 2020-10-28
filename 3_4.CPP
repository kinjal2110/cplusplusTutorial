#include<iostream.h>
#include<conio.h>
class Test
{
	int a;
	int b;
	public:
		void getdata(int x,int y)
		{
			a=x;
			b=y;
		}
		friend void avg(Test t1);
};
void avg(Test t1)
{
	float avg;
	avg=(t1.a+t1.b)/2;
	cout<<"Average of two numbers:"<<avg;
}
void main()
{
	int a,b;
	clrscr();
	Test t1;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"\nEnter second number:";
	cin>>b;
	t1.getdata(a,b);
	avg(t1);
	getch();
}