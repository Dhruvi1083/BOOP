#include<iostream.h>
#include<conio.h>

class Student
{
public:
int En_no;
char student_name[50];
char student_dept[20];
int m1,m2,m3;

public:
void getdata()
{
 cout<<"Enter Enrollment no:";
 cin>>En_no;
 cout<<"Enter Student Name:";
 cin>>student_name;
 cout<<"Enter Student Dept:";
 cin>>student_dept;
 cout<<"Enter three marks:";
 cin>>m1>>m2>>m3;
}

public:
void sum()
{
int total;

 total=m1+m2+m3;
 cout<<"Total:"<<total<<endl;
}

public:
void displaydata()
{
 cout<<"Enrollment no:"<<En_no<<endl;
 cout<<"Student Name:"<<student_name<<endl;
 cout<<"Student Dept:"<<student_dept<<endl;
}
};

int main()
{
Student s[50];
int n;
clrscr();
cout<<"Enter the Student number:";
cin>>n;
for(int i=0;i<n;i++)
{
s[i].getdata();
}
for(i=0;i<n;i++)
{
s[i].displaydata();
s[i].sum();
}

return 0;
}