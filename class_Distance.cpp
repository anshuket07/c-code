#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    int inches;

    public :
    void getdata()
    {
        cout<<"Enter the feet & inches:";
        cin>>feet>>inches;
    }

void putdata()
{
    while(inches>=12)
    {
        feet++;
        inches=inches-12;
    
    
     cout<<"\n\n distance= "<< feet <<" "<<"feet and" <<inches<<"inches";
    }
}
};
     
int main(){
        Distance d1,d2;
        d1.getdata();
        d2.getdata();
        d1.putdata();
        d2.putdata();
        return 0;
}
 