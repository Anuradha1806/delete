#include<iostream>
using namespace std;

class DB;
class DM
{
 int km,m;
 
 public:
 DM(int x,int y)
 {
  km=x*3280;
  m=y*39;
 }
 
 friend void sum(DM d1,DB d2);
};

class DB
{
 int feet,inch;
 
 public:
 DB(int x,int y)
 {
  feet=x;
  inch=y;
 }
 friend void sum(DM d1,DB d2);
};

void sum(DM d1,DB d2)
{
 int f,i;
 f=d1.km+d2.feet;
 i=d1.m+d2.inch;
 cout<<"Feet and km addition : "<<f<<endl;
 cout<<"Inch and m addition  : "<<i<<endl;
}

int main()
{ 
 DM d1(10,20);
 DB d2(30,40);
 sum(d1,d2);
}
