#include<iostream.h>
#include<conio.h>
class time
{
int hours,minutes;
public:
void get(int h,int m)
{
hours=h;
minutes=m;
}
void put(void)
{
cout<<hours<<"hours and";
cout<<minutes<<"minute"<<endl;
}
void sum(time,time);
};
void time::sum(time t1,time t2)
{
minutes=t1.minutes+t2.minutes;
hours=minutes/60;
minutes=minutes%60;
hours=hours+t1.hours+t2.hours;
}

int main()
{
time t1,t2,t3;
int a,b,c,d;
clrscr();
cout<<"Enter hours"<<endl;
cin>>a;
cout<<"Enter minutes"<<endl;
cin>>b;
cout<<"Enter hours"<<endl;
cin>>c;
cout<<"Enter minutes"<<endl;
cin>>d;
t1.get(a,b);
t2.get(c,d);
t3.sum(t1,t2);
cout<<"t1=";
t1.put();
cout<<"t2=";
t2.put();
cout<<"t3=";
t3.put();
return 0;
}