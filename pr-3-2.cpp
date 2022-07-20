#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
int a=1;
int main ()
{
int a=3;
float PI=3.14;
clrscr();
cout<<setw(10)<<setfill('*');
cout<<a<<endl;
cout<<::a+a<<endl;
cout<<setprecision(2)<<PI;
return 0;
}