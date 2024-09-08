#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[4] = {1,2,3,4};
    int first = INT_MIN , second = INT_MIN , third = INT_MIN;
    for(int i = 0 ; i < 4 ; i++){
        if(arr[i] >  first){
            third = second;
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first){
            third = second;
            second = arr[i];

        }
        else if(arr[i] > third && arr[i]!=second && arr[i] != first){
            third = arr[i];

        }
    }  
    cout<<third;
    
}