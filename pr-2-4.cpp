#include<iostream.h>
#include<conio.h>
int main()
{
int i,j,n;
clrscr();
cout<<"enter the num";
cin>>n;
for(i=1;i<=n;i++)
 {
 for(j=1;j<=i;j++)
  {
  cout<<"@";
  }
  cout<<"\n";
 }
 getch();
 return 0;
}