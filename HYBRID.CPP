/* hybrid inheritance & virtual base class */
#include<iostream.h>
#include<conio.h>
class Car
{
	public:
	void display1()
	{
		cout<<"In base class Car"<<endl;
	}
};
class FualCar: virtual public Car
{
	public:
	void display2()
	{
		cout<<"In fualCar class"<<endl;
	}
};
class ElecCar: virtual public Car
{
	public:
	void display3()
	{
		cout<<"In elecCar class"<<endl;
	}
};
class HybridCar: public FualCar,public ElecCar
{
	public:
	void display4()
	{
		cout<<"In HybridCar class"<<endl;
	}
};
void main()
{
	HybridCar h1;
	clrscr();
	h1.display1(); //error because it need to be virtual base class
	h1.display2();
	h1.display3();
	h1.display4();
	getch();

}