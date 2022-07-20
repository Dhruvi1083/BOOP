#include<iostream.h>
#include<conio.h>

class object
{
private:
int a[10], neg ,pos,  n;
public:
void get()
 {
 cout<<"Enter number you want:";
 cin>>n;
 cout<<"enter"<<b"number"<<endl;
for(int i=0;i<n;i++)
 cin>>a[i];
 }
void put()
 {
 for(int i=0;i<n;i++)
  {
    if(a[i]>0)
     {
      pos++;
     }
    else
     {
      neg++;
     }
  }
  cout<<"positive number are"<<pos<<endl;
  cout<<"negative number are"<<neg<<endl;
 }
};

int main()
{
clrscr();
object o1;
o1.get();
o1.put();

getch();
return 0;
}