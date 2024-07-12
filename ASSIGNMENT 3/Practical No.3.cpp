
#include<iostream>
using namespace std;
class oddeven
{
int r,len,bre;
public:
void area(int r)
{
cout<<"Enter the radius of circle :";
cin>>r;
float area= 3.14*r*r;
cout<<"The area of circle is :"<<area;
}
void area(int len , int bre)
{
cout<<"Enter the length:"<<endl;
cin>>len;
cout<<"Enter the breadth:"<<endl;
cin>>bre;
float area=len*bre;
cout<<"The area of rectangle is :"<<area;
}
};
int main()
{
oddeven p;
p.area(4,5);
return 0;
}


#include<iostream>
using namespace std;
class complex
{
float imag,real;
public:
complex()
{
real=0;
imag=0;
}
void getdata()
{
cout<<"Enter the real part :"<<endl;
cin>>real;
cout<<"Enter the imaganary part :"<<endl;
cin>>imag;
}
void display()
{
cout<<real<<"+"<<imag<<"i"<<endl;
}
complex operator -(complex c)
{
complex c3;
c3.real=real-c.real;
c3.imag=imag-c.imag;
return c3;
}
friend complex operator +(complex a, complex b)
{
complex t;
t.real=a.real+b.real;
t.imag=a.imag+b.imag;
return t;
}
};
intmain()
{
complex c1,c2,c3;
c1.getdata();
c2.getdata();
cout<<"Two complex numbers are :"<<endl;
c1.display();
c2.display();
cout<<"\nAddition is :"<<endl;
c3=c1+c2;
c3.display();
cout<<"\nSubstraction is :"<<endl;
c3=c1-c2;
c3.display();
return 0;
}
