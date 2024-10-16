#include<iostream>
using namespace std;
class Circle
{
private:
  int radius;
  public:
  Circle()
  {
  cout<<"Enter radius";
  cin>>radius;
  }
  void area()
  {
    cout<<"\n Area of circle:" <<3.14*radius*radius;
  }
  void paramerter()
  {
    cout<<"\n paramerter of circle:"<<2*3.14*radius;
  }

};
 int main()
 {
   Circle C1,C2;
   C1.area();
   C1.paramerter();
   C1.area();
   C2.paramerter();
   return 0;
 }
