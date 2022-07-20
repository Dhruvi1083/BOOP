#include<iostream.h>
#include<conio.h>
class base
{
public:
base(int A,int B)
{
cout<<A<<B<<endl;
}
base(int f)
{
cout<<f<<endl;
}
};
class sweety
{
public:
void show(int d)
{
cout<<d<<endl;
}
void show(int h, int n)
{
cout<<h<<n<<endl;
}
};
int main()
{
clrscr();
sweety s;
s.show[50];
s.show[100,200];
base d(10);
base a(20,30);
return 0;
}