#include<iostream.h>
#include<conio.h>
#include<string.h>
class Sample
{
	char *name;
	int len;
	public:
		Sample()
		{
			len=0;
			name=new char[len+1];
		}
		Sample(char *s)
		{
			len=strlen(s);
			name=new char[len+1];
			strcpy(name,s);
		}
	      void join(Sample &s1,Sample &s2)
		{
			len=s1.len+s2.len;
			name=new char[len+1];
			strcpy(name,s1.name);
			strcat(name,s2.name);
		}
		void show()
		{
			cout<<name;
		}
};
void main()
{
	clrscr();
	Sample s1("\nhello");
	Sample s2("\nwelcome kinjal");
	Sample s3;
	s3.join(s1,s2);

	s1.show();
	s2.show();
	s3.show();
	getch();
}