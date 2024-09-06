#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[8] = {1 , 2 , 0 , 7 , 2 , 0 , 2 , 2};
    if(arr[0] > arr[1]){
        cout<<arr[0]<<endl;
    }
    for(int i = 1 ; i < 7 ; i++){
        if(arr[i] > arr[i+1]){
            int maxi = INT_MIN;
            for(int j = 0 ; j < i ; j++){
                maxi = max(maxi , arr[j]);
            }
            if(arr[i] > maxi)//can put condition here too && krke
            {
                cout<<arr[i]<<" ";
            }

        }
    }
    
    
}