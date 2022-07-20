#include<iostream.h>
#include<conio.h>
class base1
{
public:
int b1;
void show1()
{
cout<<"VALUE OD BASE 1:"<<b1<<endl;
}
};

class base2
{
public:
int b2;
void show2()
{
cout<<"VALUE OF BASE 2:"<<b2<<endl;
}
};
class derived:public base1,public base2
{
public:
int d;
void show3()
{
cout<<"VALUE OF DERIVED CLASS:"<<d<<endl;
}
};
int main()
{
base1 obj1;
base2 obj2;
derived obj;
clrscr();
obj1.b1=5;
obj1.show1();
obj2.b2=10;
obj2.show2();

cout<<"ENTER VALUE OF BASE CLASS 1:";
cin>>obj.show1();
cout<<"ENTER VALUE OF BASE CLASS 2:";
cin>>obj.show2();
cout<<"ENTER VALUE OF DERIVED CLASS:";
cin>>obj.show3();
getch();
return 0;
}