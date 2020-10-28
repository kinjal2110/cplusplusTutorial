#include<iostream.h>
#include<conio.h>
void find_num();
void main()
{

	clrscr();
	find_num();
	getch();
}
void find_num()
{
	int n;
	 cout<<"Enter any number:";
	cin>>n;
	if(n!=0)
	{
		(n>0?cout<<"number is positive":cout<<"number is negative");

	}
	else
	{
		cout<<"number is zero";
	}


}