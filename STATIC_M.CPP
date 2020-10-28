#include<iostream.h>
#include<conio.h>
class Item
{
       int no;
       static int count;
       public:
	void getdata(int n)
	{
		no=n;
		count++;
	}
	static void showCount()
	{
		cout<<"Count="<<count;
	}
	void putdata()
	{
		cout<<"Numbers:"<<no<<endl;
	}
};
int Item::count;
void main()
{
	clrscr();
	Item i1,i2,i3;
	i1.getdata(5);
	i2.getdata(6);
	i3.getdata(7);

	i1.putdata();
	i2.putdata();
	i3.putdata();

	Item::showCount();
	getch();
}