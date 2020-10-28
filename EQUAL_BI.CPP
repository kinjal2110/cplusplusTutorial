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
		int operator ==(Complex c2)
		{
			if(real==c2.real && img==c2.img)
			{
				return(1);
			}
			else
			{
				return(0);
			}
		}
};
void main()
{
	clrscr();
	Complex c1(5.0,6.0);
	Complex c2(5.0,6.0);
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