#include<iostream>
using namespace std;
int main(){
    int arr[7] = {10 , 7 , 4 , 6 , 8 , 10 , 11};
    
    int pd = arr[1] - arr[0];
    int current = 2;
    int j = 2;
    int ans = 2;
    while(j < 7){
        if(pd == arr[j] - arr[j-1]){
            current++;
        }else{
        pd = arr[j] - arr[j-1];
        current = 2;
        }
        ans  = max(current , ans);
        j++;
    }
    cout<<ans;
}