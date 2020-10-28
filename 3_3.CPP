#include<iostream.h>
#include<conio.h>
class Time
{
	int hours;
	int minutes;
	public:
		void gettime(int h,int m)
		{
			hours=h;
			minutes=m;
		}
		void settime()
		{
			cout<<"Time="<<hours<<":"<<minutes<<endl;
		}
void sum(Time t1,Time t2)
{
	minutes=t1.minutes+t2.minutes;
	hours=minutes/60;
	hours=hours+t1.hours+t2.hours;
	minutes=minutes%60;
}
};
void main()
{
	Time t1,t2,t3;
	clrscr();
	t1.gettime(2,45);
	t2.gettime(1,35);
	t3.sum(t1,t2);

	t1.settime();
	t2.settime();
	cout<<"sum of time is:";
	t3.settime();
	getch();
}