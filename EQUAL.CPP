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
		friend int operator==(Complex c1,Complex c2);
};
int operator==(Complex c1,Complex c2)
{
	if(c1.real==c2.real && c1.img==c2.img)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
void main()
{
	clrscr();
	Complex c1(2.2,4.7);
	Complex c2(2.2,4.0);
	if(c1==c2)
	{
		cout<<"Objects are equal";
	}
	else
	{
		cout<<"Objects are not equal";
	}
	getch();
}