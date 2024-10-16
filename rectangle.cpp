#include<iostream>
using namespace std;
class rectangle
{
   private:
   int l,b;
   public:
   rectangle()
   {
    cout<<"Enter l & b: ";
    cin>>l>>b;
   }
   void area()
   {
    cout<<"\n Area of rectangle="<<l*b;
   }
};
int main()
{
    rectangle r1,r2;
    r1.area();
    r2.area();
    
    return 0;
}
