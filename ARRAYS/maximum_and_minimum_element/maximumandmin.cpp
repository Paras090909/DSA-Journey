#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    
    vector <int> arr(size);

    for(int i = 0; i< size; i++){
        cin>>arr[i];
    }

    int maximu = arr[0];
    int minimum = arr[0];

    for(int j= 0; j< size; j++){
       if(arr[j] < minimum){
        minimum = arr[j];
       }

       if(arr[j] > maximu){
        maximu = arr[j];
       }
    }

    cout<<"maximum: "<<maximu<<endl;
    cout<<"minimum: "<<minimum<<endl;

}