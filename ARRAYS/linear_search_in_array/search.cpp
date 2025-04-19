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
    int key;

    cout<<"enter the element to search"<<endl;
    cin>>key;

    
    for(int i = 0; i< size; i++){
        if(key == arr[i]){
            cout<<"array at index "<<i  <<endl;
        }
    }
}