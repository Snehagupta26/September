#include<iostream>
using namespace std;
void linears(int arr[] , int size , int key){
    for(int i = 0 ; i < size ; i++){
        if(key == arr[i]){
            cout<<"found at : "<<i<<endl;
        }
    }
    
}
int main(){
    int arr[6] = {4,3,6,1,8,9};
    int key = 8;
    linears(arr , 6 , 8);
    return 0;
}