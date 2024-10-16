#include<iostream>
using namespace std;
class Complex
 {
    private:
    int R,I;
    public:
    Complex()
    {
        cout<<"\n Enter Real and Imaginary partr :";
        cin>>R>>I;
    }
   void putdata()
   {
    cout<<"\n complex No ="<< R<<"+i"<<I;
   }
 };
   int main()
   {
    Complex C1,C2;
    C1.putdata();
    C2.putdata();
    return 0;
   }
 
