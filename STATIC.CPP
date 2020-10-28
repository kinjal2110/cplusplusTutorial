#include<iostream.h>
#include<conio.h>
//static int c;
class Sample
{
	public:
	static int c;
	int a;
	float b;
 //     public:
		void getdata(int x,float y)
		{
			a=x;
			b=y;
		}
		void putdata()
		{
			cout<<a<<endl<<b;
		}
};
int Sample::c;
void main()
{
	clrscr();
	Sample s1;
	s1.getdata(2,6.7);
	s1.putdata();
	//Sample::c=8;
	getch();
	getch();
}