/* heirarchical inheritance */
#include<iostream.h>
#include<conio.h>
class Student
{
	public:
	void display1()
	{
		cout<<"In student class"<<endl;
	}
};
class Engineering:public Student
{
	public:
	void display2()
	{
		cout<<"In Engineering class"<<endl;
	}
};
class IT:public Engineering
{
	public:
	void display3()
	{
		cout<<"In IT class"<<endl;
	}
};
class Comp:public Engineering
{
	public:
	void display4()
	{
		cout<<"In computer class"<<endl;
	}
};
class Mech:public Engineering
{
	public:
	void display5()
	{
		cout<<"In mechanical class"<<endl;
	}
};
void main()
{
	IT p1;
	clrscr();
	p1.display1();
	p1.display2();
	p1.display3();

	Comp p2;
	p2.display1();
	p2.display2();
	p2.display4();
	getch();
}