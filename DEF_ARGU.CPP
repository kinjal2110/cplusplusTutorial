#include<iostream.h>
#include<conio.h>
class Distance
{
	int feet;
	int inches,height;
	public:
		Distance()
		{
			feet=0;
			inches=0;
		}
		Distance(int f,int i=0)
		{
			feet=f;
			inches=i;
		}
		Distance(int f,int i)
		{
			feet=f;
			inches=i;
		    //	height=h;
		}
		void show()
		{
			cout<<"\nDistance:"<<feet<<"feet and "<<inches<<"inches";
		}
		};
		void main()
		{
			clrscr();
			Distance d1;
			Distance d2(5);
			Distance d3(10,20);
			d1.show();
			d2.show();
			d3.show();
			getch();
		}