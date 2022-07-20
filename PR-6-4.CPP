#include<iostream.h>
#include<conio.h>
class student
{
public:
int E_no;
char student_name[50];
char student_dept[20];
int m1,m2,m3;
public:
void getdata()
{
cout<<"Enter enrollment no:";
cin>>E_no;
cout<<"Enter name:";
cin>>student_name;
cout<<"Enter department:";
cin>>student_dept;
cout<<"Enter three marks:";
cin>>m1>>m2>>m3;
}
public:
void sum()
{
int total;
total=m1+m2+m3;
cout<<"total:"<<total<<endl;
public:
void displaydata()
{
cout<<"Enrollment no:"<<E_no<<endl;
cout<<"name:"<<student_name<<endl;
cout<<"dept:"<<student_dept<<endl;
}
};
int main()
{
student s[50];
int n;
clrscr();
cout<<"Enter the student number:";
cin>>n;
for(int i=0; i<n; i++)
{
d[i].getdata();
}
for(int i=0; i<n; i++)
{
s[i].displaydata();
s[i].sum();
}
return 0;
}