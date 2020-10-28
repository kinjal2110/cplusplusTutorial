/* pointer to array of object */
#include<iostream.h>
#include<conio.h>
class Student
{
	int enno;
	char name[23];
	public:
	void getdata()
	{
		cout<<"Enter enno of student: ";
		cin>>enno;
		cout<<"Enter name of student: ";
		cin>>name;
	}
	void putdata()
	{
		cout<<"Enno of student: "<<enno<<endl;
		cout<<"Name of student: "<<name<<endl;
	}
};
void main()
{
	Student s[3];
	Student *p;
	int i;
	clrscr();
	p=&s[i];
	for(i=0;i<3;i++)
	{
		p->getdata();
		p++;
	}
	p=&s[i];
	for(i=0;i<3;i++)
	{
		p->putdata();
		p++;
	}
	getch();
}