#include<iostream>
using namespace std;
int main(){
    int n;

    cin>>n;
    int sum1 = 0;
    cout<<"Even : "<<endl;
    for(int i = 1 ; i <=n ; i++){
        
        if(i%2==0){
            cout<<i<<" ";
            sum1 = sum1+i;
        }
    }
    cout<<"sum of even numbers is : "<<sum1<<endl;
    cout<<endl;
    cout<<"Odd : "<<endl;
    int sum2 = 0;
    for(int i = 1 ; i <=n ; i++){
        
        if(i%2 != 0){
            cout<<i<<" ";
            sum2 = sum2 + i;
        }
    }
    cout<<"sum of odd numbers is : "<<sum2<<endl;
}