/* multiple inheritance */
#include<iostream.h>
#include<conio.h>
class A
{
	int m;
	public:
	void getm(int x)
	{
		m=x;
	}
	void putm()
	{
		cout<<"m="<<m<<endl;
	}
};
class B
{
	int n;
	public:
	void getn(int y)
	{
		n=y;
	}
	void putn()
	{
		cout<<"n="<<n<<endl;
	}
};
class C:public A,public B
{
	public:
	void display()
	{
		putm();
		putn();
	}
};
void main()
{
	C p1;
	clrscr();
	p1.getm(5);
	p1.getn(7);
	p1.display();
	getch();
}