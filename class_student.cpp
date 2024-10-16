#include<iostream>
using namespace std;
class Student
{
    private:
    char name[100];
    char enrollment[20];
    int age;
    char branch[10];
    char Semester;

    public:
    void getdata()
    {
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter  enrollment no:";
        cin>>enrollment;
        cout<<"Enter age:";
        cin>>age;
        cout<<"Enter branch:";
        cin>>branch;
        cout<<"Enter semester:";
        cin>>Semester;

    }
    void putdata()
    {
        cout<<"\n\n Name="<<name;
        cout<<"\n enrollment="<<enrollment;
        cout<<"\n age="<<age;
        cout<<"\n branch="<<branch;
        cout<<"\n semester="<<Semester;
    }
};
int main()
{
    Student s1,s2;
    s1.getdata();
    s2.getdata();
    s1.putdata();
    s2.putdata();
    return 0;
}


    



