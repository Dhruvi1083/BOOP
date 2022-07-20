#include<iostream.h>
#include<conio.h>

struct student
{
char name[10];
int r_no;
int age;
char branch[10];
};

int main()
{
student s;
char i,n;
clrscr();
cout<<"Enter student details:"<<endl;
for(i=0;i<n;i++)
{
cout<<"Enter name: ";
cin>>s.name;
cout<<"Enter roll no: ";
cin>>s.r_no;
cout<<"Enter age: ";
cin>>s.age;
cout<<"Enter branch: ";
cin>>s.branch;
cout<<endl;
}

cout<<"Display student details"<<endl;
for(i=0;i<n;i++)
{
cout<<"Student name:"<<s.name<<endl;
cout<<"Student r_no:"<<s.r_no<<endl;
cout<<"Student age:"<<s.age<<endl;
cout<<"Student branch:"<<s.branch<<endl<<endl;
}
getch();
return 0;
}