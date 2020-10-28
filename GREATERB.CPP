#include<iostream.h>
#include<string.h>
#include<conio.h>
class Sample
{
	char *s;
	int len;
	public:
	 Sample()
	 {
		len=0;
		s=new char[len+1];
	 }
	 Sample(char *n)
	 {
		len=strlen(n);
		s=new char[len+1];
		strcpy(s,n);
	 }
	 int operator <=(Sample s2)
	 {
		if(len<=s2.len)
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
	Sample s1="hello";
	Sample s2="Kinjal";
	if(s1<=s2)
	{
		cout<<"kinjal is greater";
	}
	else
	{
		cout<<"hello is greater";
	}
	getch();
}