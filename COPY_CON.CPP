#include<iostream.h>
#include<conio.h>
class Test
{
	int a;
	public:
		Test()
		{
			a=2;
		}
		Test(int x)
		{
			a=x;
		}
		Test(Test &t)
		{
			a=t.a;
		}
		void show()
		{
			cout<<a<<endl;
		}
};
void main()
{
	clrscr();
	Test t1;
	Test t2(5);
	Test t3(t2);
	Test t4=t2;

	t1.show();
	t2.show();
	t3.show();
	t4.show();
	getch();
}