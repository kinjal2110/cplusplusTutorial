/* single level inheritance */
#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
	int b;
	      void show1()
	      {
			cout<<"In Base class A"<<endl;
	      }
};
class B:public A
{
	public:
		void show2()
		{
			cout<<"In class B";
		}
};
void main()
{
	B x;
	x.b=5;
	clrscr();
	x.show1();
	x.show2();
	getch();
}