/* pointer to object */
#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
	void getdata(int i)
	{
		a=i;
	}
	void show()
	{
		cout<<a<<endl;
	}
};
void main()
{
	A a1;
	A *p;
	clrscr();
	p=&a1;
	a1.getdata(5);
	a1.show();
	getch();
}