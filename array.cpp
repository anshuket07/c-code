#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int large=arr[0];
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<n;i++){
        if(arr[i]> large){
            large=arr[i];
        }
    }
    cout<<"large number is "<<large;
    return 0;

}
