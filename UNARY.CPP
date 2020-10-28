#include<iostream.h>
#include<conio.h>
class Sample
{
	int a,b;
	public:
	void getdata(int x,int y)
	{
		a=x;
		b=y;
	}
	void putdata()
	{
		cout<<"first value:"<<a<<endl<<"second value:"<<b<<endl;
	}
	void operator - ()
	{
		-a;
		-b;
		//cout<<a<<b<<endl;
	}
};
void main()
{
	clrscr();
	Sample s1,s2;
	s1.getdata(10,22);
	s2.getdata(33,45);
	s1.putdata();
	s2.putdata();
	-s1;
	s1.putdata();
	-s2;
	s2.putdata();
	getch();

}