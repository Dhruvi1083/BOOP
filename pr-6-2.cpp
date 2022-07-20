#include<iostream.h>
#include<conio.h>

class Employee
{
public:
int Emp_ID;
char Emp_name;
char Emp_dept;

public:
void getdata()
{
 cout<<"Enter Employee ID:";
 cin>>Emp_ID;
 cout<<"Enter Employee Name:";
 cin>>Emp_name;
 cout<<"Enter Employee Dept:";
 cin>>Emp_dept;
}

public:
void displaydata()
{
 cout<<"Employee ID:"<<Emp_ID<<endl;
 cout<<"Employee Name:"<<Emp_name<<endl;
 cout<<"Employee Dept:"<<Emp_dept<<endl;
}
};

int main()
{
Employee e[50];
int n;
clrscr();
cout<<"Enter the Employ num:";
cin>>n;
for(int i=0;i<n;i++)
{
e[i].getdata();
}
for(i=0;i<n;i++)
{
e[i].displaydata();
}

return 0;
}