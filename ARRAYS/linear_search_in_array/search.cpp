#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    int arr[size];

    cout<<"enter elements of array " <<endl;
    for(int i = 0; i< size; i++){
        cin>>arr[i];
    }
    
    int target;

    cout<<"enter the element to search"<<endl;
    cin>>target;
    
    for(int i = 0; i< size; i++){
        if(target == arr[i]){
            cout<<"array at index "<< i <<endl;
        }
        else{
           cout<<"target is not in array "<<endl;
        }
    }
}
