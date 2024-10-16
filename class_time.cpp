#include<iostream>
using namespace std;
class Time
{
    private:
    int hours;
    int minutes;
    int second;
    public:
    void getdata()
    {
    cout<<"Enter the hours:";
    cin>>hours;
    cout<<"Enter the mintues:";
    cin>>minutes;
    cout<<"Enter the second:";
    cin>>second;
    }
    void putdata()
    {
        while(second>=60)
        {
            minutes++;
           second= second-60;
           while(minutes>=60){
           hours++;
            minutes= minutes-60;            
           
           } 


        }
        cout<<"\n\n hours="<<hours;
        cout<<"\n minutes="<<minutes;
        cout<<"\n second="<<second;
    }
    
};
  int main()
  {
      Time t1,t2;
      t1.getdata();
      t2.getdata();
      t1.putdata();
      t2.putdata();
      return 0;
  }
