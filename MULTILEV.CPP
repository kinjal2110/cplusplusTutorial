/* multilevel inheritance */
#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
		void show1()
		{
			cout<<"In base class A"<<endl;
		}
};
class B:public A
{
	public:
		void show2()
		{
			cout<<"In class B"<<endl;
		}
};
class C:public B
{
	public:
		void show3()
		{
			cout<<"In derived class C"<<endl;
		}
};
void main()
{
	C x;
	clrscr();
	x.show1();
	x.show2();
	x.show3();
	getch();
}