#include<iostream.h>
#include<conio.h>
class Test
{
	int x,y;
	public:
	Test(int a,int b)
	{
		x=a;
		y=b;
	}
	void showdata()
	{
		cout<<"\nx="<<x<<" y="<<y<<endl;
	}
};
void main()
{
	clrscr();
	Test t1(5,4);
	t1.showdata();
	getch();
}