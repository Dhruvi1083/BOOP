#include<iostream.h>
#include<conio.h>

int sum(int x,int y,int z=0,int w=0)
{
return(x+y+z+w);
}
int main()
{
cout<< sum(15,20)<<endl;
cout<< sum(15,20,10)<<endl;
cout<< sum(15,20,10,5)<< endl;

getch();
return 0;
}

