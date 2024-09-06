#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5] = {3,1,5,2,0};
    int maxi = INT_MIN;
    int mini = INT_MAX;
    
    for(int i = 0 ; i < 5 ; i++){
        // if(arr[i] > max){
        //     max = arr[i];
            
        // }
        maxi = max(maxi , arr[i]);
        // if(arr[i] < min){
        //     min = arr[i];
        // }
        mini = min(maxi , arr[i]);
    }
    cout<<maxi<<" "<<mini<<endl;
    return 0;
}