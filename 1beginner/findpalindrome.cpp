#include<iostream>
using namespace std;
int main(){
    int min = 10;
    int max = 50;
    for(int i = min ; i <= max; i++){
        int orig = i;
        int res = 0;
        while(orig!=0){
            int x = orig%10;
            res = res*10 + x;
            orig = orig/10;
        }
        if(i == res){
            cout<<i<<" ";
        }

    }
}