#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    
    int arr[size];
    cout<<"enter array elements"<<endl;
    for(int i = 0; i< size; i++){
        cin>>arr[i];
    }

    int maximum = arr[0];
    int minimum = arr[0];

       // i have used same loop for checking both minimum and maximum element, you can alternatively use two loops also
    for(int j= 0; j< size; j++){
        // checking for minimum element
       if(arr[j] < minimum){
        minimum = arr[j];
       }

        // checking for maximum element
       if(arr[j] > maximum){
        maximum = arr[j];
       }
    }

    cout<<"maximum: "<<maximum<<endl;
    cout<<"minimum: "<<minimum<<endl;

}
