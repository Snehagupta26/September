#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int res = 0;
    int orignal_num = n;
    while(n!=0){
        int x = n%10;
        res = res*10+x;
        n = n/10;
    }
    cout<<res<<endl;
    if(orignal_num == res){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"not palindrome"<<endl;
    }
}