#include<iostream.h>
#include<string.h>
#include<conio.h>
class Employee
{
	char name[20];
	int age;
	public:
		void getdata(char *n,int a)
		{
			strcpy(name,n);
			age=a;
		}
		void putdata()
		{
			cout<<"Employee name is:"<<name<<endl;
			cout<<"Employee age is:"<<age<<endl;
		}
};
void main()
{
	Employee e[3];
	char *n;
	int a,i;
	clrscr();
	cout<<"Enter employee data:"<<endl;
	for(i=0;i<3;i++)
	{
	cout<<"Enter name of employee:";
	cin>>n;
	cout<<"\nEnter age of employee:";
	cin>>a;
	e[i].getdata(n,a);
	e[i].putdata();
	}

	getch();

}