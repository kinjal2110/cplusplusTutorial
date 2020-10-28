#include<iostream.h>
#include<conio.h>
class Distance
{
	int feet;
	int inches;
	public:
		Distance()
		{
			feet=0;
			inches=0;
		}
		Distance(int x,int y)
		{
			feet=x;
			inches=y;
		}
		void showdata()
		{
			cout<<"feet is: "<<feet<<"  inches is:"<<inches<<endl;
		}
};
void main()
{

	clrscr();
	Distance t1;
	Distance t2(5,6);
	t1.showdata();
	t2.showdata();
	getch();
}