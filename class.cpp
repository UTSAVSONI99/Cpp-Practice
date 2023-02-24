#include<iostream>
using namespace std;
class rectangle
{
  public:
  int length;
  int width;
  int area()
  {
    return length*width;
  }
  int perimeter()
  {
   return 2*(length+width);
  }
};
  int main()
  {
     rectangle r1,r2;
     r1.length=10;
     r1.width=7;
     cout<<r1.area<<endl;
     cout<<r1.perimeter;
  }
