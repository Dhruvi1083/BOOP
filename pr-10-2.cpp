#include<iostream.h>
#include<conio.h>
class temp
{
private:
float f;
public:
float c;
temp()
{
cout<<"ENTER THE VALU OF R:";
cin>>f;
}
~temp()
{
c=(f-32)*float(5)/9;
cout<<"ANSWER:"<<c<<endl;
}
};
int main()
{
temp t;
getch();
return 0;
}