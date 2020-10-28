#include<iostream.h>
#include<conio.h>
#include<math.h>

void power(double m, int p=2)
{
	cout<<"Power is :"<<pow(m,p);
}

void main()
{
  clrscr();
 double n1,n2;
  cout<<"Enter the value of n1 :"<<endl;
  cin>>n1;
  cout<<"Enter the value of n2 :"<<endl;
  cin>>n2;
  power(n1,n2);
  cout<<endl;
  cout<<"using default argument:"<<endl;
  power(n1);
  getch();
}

