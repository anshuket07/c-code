#include<iostream>
using namespace std;
class timeconstructor
{
    private:
    int H,M,S;
public:
Time( int a,int b,int c)
{
 H=a;
 M=b;
 S=c;
}
void display()
{
    while(S>=60)
    M++;
    S=S-60;

  while(M>=60)
  {
   H++;
   M=M-60;
  }
}
 cout<<"\nTime = "<<   
};
 int main()

