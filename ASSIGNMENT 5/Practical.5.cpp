
#include<iostream>
#include<string>
using namespace std;
void emp(int a , float b)
{
try
{
if(a<18 && b>5)
{
throw a;
}
else if (a>=18 && b<5)
{
throw b;
}
else
{
cout<<"YOU ARE ELIGIBLE "<<endl;
}
}
catch(int a)
{
cout<<"Sorry !You are below 18"<<endl;
}
catch(float b)
{
cout<<"SORRY !,YOU ARE NOT ELIGIBLE "<<endl;
}
}
int main()
{
int age;
float exper;
string name;
cout<<"---------------Hiring Employee--------------"<<endl;
cout<<"Enter your name :"<<endl;
cin>>name;
cout<<"Youe name is :"<<name<<endl;
cout<<"Enter your age :"<<endl;
cin>>age;
cout<<"Enter your Experience IN YEARS :"<<endl;
cin>>exper;
emp(age,exper);
return 0;
}


#include<iostream>
#include<string>
using namespace std;
class data
{
protected:
int side,l,b;
public :
void getdata()
{
cout<<"Enter the length:";
cin>>l;
cout<<"Enter the breadth :";
cin>>b;
}
virtual void area()
{ 
cout<<"hello";
}
};
class reactangle: public data
{
public:
void area(){
cout<<l*b<<endl;}
};
class triangle: public data
{
public:
void area(){
cout<<0.5*l*b<<endl;}
};
intmain()
{ 
int ch;
int m;
reactangle r;
triangle t;
data *ptr;
do
{ 
cout<<"Enter choice :\n1.Reactangle \n2.Triangle "<<endl;
cin>>ch;
switch(ch)
{
case 1:
ptr=&r;
ptr->getdata();
ptr->area();
break;
case 2:
ptr=&t;
ptr->getdata();
ptr->area();
break;
}
cout<<"Do you want to continue ?:";
cin>>m;
}
while(m==1);
return 0;
}
