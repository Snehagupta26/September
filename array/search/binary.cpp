#include<iostream>
using namespace std;
void binarys(int arr[] , int size , int key){
    int left = 0;
    int right = size-1;
    int mid = (left+right)/2;
    //int mid = left - (left-right)/2
    while(left <= right){
        if(key == arr[mid]){
            cout<<mid;
            break;
        }
        else if(key < arr[mid]){
            right = mid - 1;
        }
        else if (key > arr[mid]){
            left = mid + 1;
        }
        mid = (left + right)/2;
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int key = 5;
    binarys(arr , 6 , 5);

    return 0;
}