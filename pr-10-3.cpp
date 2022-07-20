#include<iostream.h>
#include<conio.h>
class student
{
private:
int boop,bde,maths,sum;
char std_name[20],cours[10];
public:
student()
{
cout<<"ENTER STUDENT DATA"<<endl;
cout<<"ENTER NAME:";
cin>>std_name;
cout<<"ENTER COURS:";
cin>>cours;
cout<<"ENTER MARKS IN BOOP:";
cin>>boop;
cout<<"ENTER MARKS IN BDE:";
cin>>bde;
cout<<"ENTER MARKS IN MATHS:";
cin>>maths;
}
~student()
{
cout<<"NAME:"<<std_name<<endl;
cout<<"COURS:"<<cours<<endl;
sum=boop+bde+maths;
cout<<"TOTAL MARKS:"<<sum<<endl;
}
};
int main()
{
student s;
clrscr();
getch();
return 0;
}