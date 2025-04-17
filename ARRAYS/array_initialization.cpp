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

    cout<<"array"<<endl;
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }
}