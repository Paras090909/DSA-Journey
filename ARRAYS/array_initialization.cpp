#include<iostream>
using namespace std;

int main(){
    int size;
    // for size of the array
    cout<<"enter size"<<endl;
    cin>>size;
    //initializing array with the size
    int arr[size];
    cout<<"enter array elements"<<endl;
    for(int i = 0; i< size; i++){
        cin>>arr[i];
    }
        //printing elements of array
    cout<<"array elements "<<endl;
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }
}
