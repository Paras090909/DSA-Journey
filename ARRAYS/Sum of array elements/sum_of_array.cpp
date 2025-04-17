#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    vector <int>arr(size);
    cout<<"enter element"<<endl;
    for(int i = 0; i< size; i++){
        cin>>arr[i];
    }
    int sum = 0;

   
    for(int i = 0; i< size; i++){
        sum += arr[i];
    }
    cout<<"sum : "<<sum<<endl;
}