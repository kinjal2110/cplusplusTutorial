#include<iostream.h>
#include<conio.h>
class Complex
{
	float real;
	float img;
	public:
	Complex()
	{
		real=0.0;
		img=0.0;
	}
	Complex(float r,float i)
	{
		real=r;
		img=i;
	}
	void show()
	{
		cout<<real<<"+"<<img<<"j"<<endl;
	}
	Complex operator +(Complex c2)
	{
		Complex c3;
		c3.real=real+c2.real;
		c3.img=img+c2.img;
		return(c3);
	}
};
void main()
{
	clrscr();
	Complex c1(1.6,2.4);
	Complex c2(1.2,3.3);
	Complex c3;
	c3=c1+c2;

	cout<<"first complex number:";
	c1.show();
	cout<<"second complex number:";
	c2.show();
	cout<<"Addition is:";
	c3.show();
	getch();
}