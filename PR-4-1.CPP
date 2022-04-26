#include<iostream.h>
#include<conio.h>
int &max(int&,int&);
int main()
{
int a,b,c;
clrscr();
cout<<"enter a is";
cin>>"a";
cout<<"enter b is";
cin>>"b";

//normal call
c=max(a,b);
cout<<"normal call"<<endl;
cout<<"max"<<c<<endl;

//left side call
max(a,b)=0;
cout<<"left side call"<<endl;
cout<<"a"<<a<<endl;
cout<<"b"<<b<<endl;
getch();
return 0;
}

int &max(int &x,int &y)
{
return(x>y?x:y);
}