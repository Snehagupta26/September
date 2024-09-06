#include<iostream>
using namespace std;
int main(){
    int arr[4] = {1,2,3,4};
    for(int i = 0 ; i < 4 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr[49]<<endl;
    int arr1[4] = {0};
    for(int i = 0 ; i < 4 ; i++){
        cout<<arr1[i]<<" ";
    }
    int arr2[4] = {67};
    cout<<endl;
    for(int i = 0 ; i < 4 ; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    int arr3[4];
    fill_n(arr3,4,90);
    for(int i = 0 ; i < 4 ; i++){
        cout<<arr3[i]<<" ";
    }

    cout<<endl;
    cout<<arr;

    return 0;
}