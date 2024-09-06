#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[7] = {1,5,3,4,3,5,6};
    int count;
    for(int i = 0 ; i < 7 ; i++){
        count = 0;
        for(int j = 0 ; j < 7 ; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
       if(count > 1){
        
       }
    }
    
    
    
}