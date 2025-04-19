#include<iostream>
#include<vector>

using namespace std;

int main(){
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    vector <int> arr(size);
    vector <int> arr2(size);
    int k = 0;
    int m = 0;

    for(int i = 0; i< size; i++){
        cin>>arr[i];
    }
    

    cout<<"array"<<endl;
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i< size; i++){
       arr2[m] = arr[k];
       m++;
       k++; 
    }

    cout<<" copy array"<<endl;
    for(int i = 0; i< size; i++){
        cout<<arr2[i]<<" ";
    }

}