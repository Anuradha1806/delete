#include<iostream>
using namespace std;

class Box
{
 int l,b,h;
 public:
 
 //default
 Box()
 {
  l=0;
  b=0;
  h=0;
 }
 
 Box(int a,int x,int c)
 
 {
  l=a;
  b=x;
  h=c;
 }
 
 //copy constructor
 Box(Box &obj)
 {
  l=obj.l;
  b=obj.b;
  h=obj.h;
 }
 
 Box(int a)
 {
  l=a;
  b=a;
  h=a;
 }
 void volume()
 {
  cout<<"Volume of the cube is = "<<l*b*h<<endl;
 }
 
 void display()
 {
  cout<<"l = "<<l<<endl;
  cout<<"b = "<<b<<endl;
  cout<<"h = "<<h<<endl;
}
};

int main()
{
 Box b1,b2(200),b3(10,40,60),b4(b2);
 b1.volume();
 b2.volume();
 b3.volume();
 b4.volume();
}
