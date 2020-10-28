#include<iostream.h>
#include<conio.h>
class XYZ;
class ABC
{
	int a;
	public:
		void getdata(int i)
		{
			a=i;
		}
		friend void max(ABC a1,XYZ b1);
};
class XYZ
{
	int x;
	public:
		void getdata(int c)
		{
			x=c;
		}
		friend void max(ABC a1,XYZ b1);
};
void max(ABC a1,XYZ b1)
{
	if(a1.a>b1.x)
	{
		cout<<"Maximum value is:"<<a1.a;
	}
	else
	{
		cout<<"Maximum value is:"<<b1.x;
	}
}
void main()
{
	int a,b;
	clrscr();
	ABC p1;
	XYZ p2;
	cout<<"Enter first value:";
	cin>>a;
	p1.getdata(a);
	cout<<"\nEnter second value:";
	cin>>b;
	p2.getdata(b);
	max(p1,p2);
	getch();
	p1.getdata();
}