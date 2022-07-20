#include<iostream.h>
#include<conio.h>
class account
{
public:
float salary;
account()
{
salary = 30000;
}
void disp_acc()
{
cout<<"salary"<<salary<<endl;
}
};
class programmer:public account
{
public:
float bouns;
programmer()
{
bouns = 25000;
}
void disp_prof()
{
cout<<"Bouns"<<bouns<<endl;
}
};
class clerk:public programmer
{
public:
float derness;
clerk()
{
derness=25;
}
void cle()
{
float total;
cout<<"TOTAL SALARY:"<<salary<<endl;
cout<<"BASIC:"<<endl;
cout<<"BOUNS:"<<bouns<<endl;
cout<</*"TOTAL SALARY:"<<*/total=salary+bouns(salary*derness)/100;
cout<<"DERNESS:"<<(salary*derness)/100<<endl;
cout<<"TOTAL SALARY:"<<total<<endl;
}
};
int main(void)
{
clerk p;
clrscr();
cout<<"salary:"<<p.salary<<endl;
cout<<"Bouns:"<<p.bouns<<endl;
cout<<"CLERK:"<<p.derness<<endl;
p.disp_acc();
p.disp_prof();
p.cle();
getch();
return 0;
}