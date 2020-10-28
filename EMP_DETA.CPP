#include<iostream.h>
#include<conio.h>
class Employee
{
	char name[30];
	int age;
	float salary;
	public:
	void getdata()
	{
		cout<<"enter name:"<<endl;
		cin>>name;
		cout<<"enter age:"<<endl;
		cin>>age;
		cout<<"enter salary:"<<endl;
		cin>>salary;
	}
	void putdata()
	{
		cout<<"name:"<<name<<endl;
		cout<<"age:"<<age<<endl;
		cout<<"salary:"<<salary<<endl;
	}
};
void main()
{
	clrscr();
	Employee e1,e2;
	e1.getdata();
	e1.putdata();
	e2.getdata();
	e2.putdata();
	getch();
}