#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
     int arr[size];
    cout <<"enter  element" << endl;

    
    for(int i = 0; i< size; i++){
        cin>>arr[i];
    }
    
    int sum = 0;

    
    for(int i = 0; i< size; i++){
        sum += arr[i];
        
    }
    int avg = sum / size;
    cout<<"average value of array elements: " << avg << endl;
}
