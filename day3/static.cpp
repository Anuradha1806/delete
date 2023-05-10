#include<iostream>
using namespace std;

class A
{
 int a;
 int b;
 static int count;
 
 public:
 void setdata(int x,int y)
 {
  a=x;
  b=y;
  count++;
 }
 
 static void getcount()
 {
  cout<<"count = "<<count<<endl;
 }
 
 void display()
 {
  cout<<"a = "<<a<<endl;
  cout<<"b = "<<b<<endl;
  
 }
};

int A::count;

int main()
{
 A a1,a2,a3;
 A::getcount();
 a1.getcount();
 a2.getcount();
 a3.getcount();
}
