#include<iostream.h>
#include<conio.h>
#include<math.h>
class Complex
{
	float real;
	float img;
	public:
		void getdata(float r,float i)
		{
			real=r;
			img=i;
		}
		void putdata()
		{
			cout<<real<<"+"<<img<<"j"<<endl;
		}
		friend Complex sum(Complex c1,Complex c2);
};
Complex sum(Complex c1,Complex c2)
{
	Complex p1;
	p1.real=c1.real+c2.real;
	p1.img=c1.img+c2.img;
	return(p1);
}
void main()
{
	clrscr();
	Complex c1,c2,c3;
	c1.getdata(2,3);
	c2.getdata(4,2);
	c3=sum(c1,c2);

	c1.putdata();
	c2.putdata();
	cout<<"sum is:";
	c3.putdata();
	getch();
}