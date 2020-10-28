/* class to class convrsion */
#include<iostream.h>
#include<conio.h>
class Sample
{
	int no;
	int qty;
	float rate;
	public:
		Sample(int n,int q,float r)
		{
			no=n;
			qty=q;
			rate=r;
		}
		void display()
		{
			cout<<"Number is: "<<no<<endl;
			cout<<"Quantity is: "<<qty<<endl;
			cout<<"Rate is: "<<rate<<endl;
		}
		int getno()
		{
			return(no);
		}
		float getAmt()
		{
			return(qty*rate);
		}
};
class Demo
{
	int no;
	float amt;
	public:
	       /*	Demo(int n,float a)
		{
			no=n;
			amt=a;
		}*/
		void display()
		{
			cout<<"Number is: "<<no<<endl;
			cout<<"Amount is: "<<amt<<endl;
		}
		void operator=(Sample s1)
		{
			no=s1.getno();
			amt=s1.getAmt();
		}
};
void main()
{
	clrscr();
	Sample s1(1,2,5.6);
	Demo d1;
	d1=s1;
       //	=s1;
	s1.display();
	d1.display();
	getch();
}