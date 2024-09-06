#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[6] = {1 , 0 , 5 , 4 , 6 , 8};
     
    for(int i = 1 ; i < 6 ; i++){
        for(int j = i-1;j<i;j++){
            arr[i] = max(arr[i],arr[j]);
        }
    }
    
    //better approach
    // int mx = INT_MIN;
    // for(int i = 0 ; i < 6 ; i++){
    //  mx = max(mx , arr[i]);
    //  cout<<mx<<" ";
    // }
    // cout<<endl;
    for(int i = 0 ; i < 6 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
    
}