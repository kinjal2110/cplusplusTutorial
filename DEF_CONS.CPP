#include<iostream.h>
#include<conio.h>
class Test
{
	int m;
	int n;
	public:
		Test()
		{
			m=5;
			n=6;
		}
		void showdata()
		{
			cout<<m<<n<<endl;
		}
};
void main()
{
	clrscr();
	Test t1,t2;
	t1.showdata();
	t2.showdata();
	getch();
}