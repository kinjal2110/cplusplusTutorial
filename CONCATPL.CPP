#include<iostream.h>
#include<conio.h>
#include<string.h>
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
		Sample operator +(Sample s2)
		{
			Sample s4;
			s4.len=len+s2.len;
			s4.s=new char[s4.len+1];
			strcpy(s4.s,s);
			strcat(s4.s,s2.s);
			return(s4);
		}
		void show()
		{
			cout<<s<<endl;
		}
};
void main()
{
	clrscr();
	Sample s1="hello";
	Sample s2="Kinjal";
	Sample s3;
	s3=s1+s2;
	s1.show();
	s2.show();
	s3.show();
	getch();
}