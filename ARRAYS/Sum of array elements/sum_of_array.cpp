#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    int arr[size];
    int sum = 0;
    
    cout<<"enter element"<<endl;
    for(int i = 0; i< size; i++){
        cin>>arr[i];
    }
  

   
    for(int i = 0; i< size; i++){
        sum += arr[i];
    }
    cout<<"sum of elements is : " << sum << endl;
}
