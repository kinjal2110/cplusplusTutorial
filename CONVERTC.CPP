/* class to basic conversion */
#include<iostream.h>
#include<conio.h>
class Sample
{
	float a;
	public:
		Sample(float x)
		{
			a=x;
		}
		operator float()
		{
			float x;
			x=a;
			return(x);
		}
};
void main()
{
	clrscr();
	Sample s1(6.78);
	float a=s1;
	cout<<a;
	getch();
}