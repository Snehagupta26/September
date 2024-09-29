#include<iostream>
using namespace std;
int main(){
    int n;

    cin>>n;
    cout<<"Even : "<<endl;
    for(int i = 1 ; i <=n ; i++){
        
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<"Odd : "<<endl;
    for(int i = 1 ; i <=n ; i++){
        
        if(i%2 != 0){
            cout<<i<<" ";
        }
    }
}