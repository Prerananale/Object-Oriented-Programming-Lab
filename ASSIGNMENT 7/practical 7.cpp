#include<iostream>
using namespace std;
template<class T>
class Test
{
private:
T a;
public:
Test(T x)
{
a=x;
}
void display()
{
cout<<"The Area of Circle\n"<<(3.14)*a*a<<endl;
}
};
int main()
{
Test<float>test1(3.36);
test1.display();
Test<int>test2(2);
test2.display();
Test<char>test3('a');
test3.display();
return 0;
}
