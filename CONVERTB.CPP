/* basic to class conversion */
#include<iostream.h>
#include<conio.h>
class Sample
{
	int a;
	public:
		Sample()
		{
			a=0;
		}
		Sample(int i)
		{
			a=i;
		}
		void show()
		{
			cout<<"Basic to class coversion:"<<a;
		}
};
void main()
{
	clrscr();
	Sample s1;
	int a=5;
	s1=a;
	s1.show();
	getch();
}