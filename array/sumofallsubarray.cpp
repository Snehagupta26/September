#include<iostream>
using namespace std;
int main(){
    int arr[3] = {1,2,2};
    int sum;
    for(int i = 0 ; i < 3 ; i++){
        sum = 0;
        for(int j = i ; j < 3 ; j++){
            sum = sum + arr[j];
            cout<<sum<<" ";
        }
    }
}