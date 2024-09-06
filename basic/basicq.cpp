#include<iostream>
using namespace std;
int main(){
    //check odd even
    int num1;
    cout<<"enter the number to check odd or even : "<<endl;
    cin>>num1;
    if(num1 % 2 == 0){
        cout<<"even"<<endl;

    }else{
        cout<<"odd"<<endl;
    }
//max of 2 numbers
    int a = 2;
    int b = 4;
    if(a > b){
        cout<<"big is a";
    }else{
        cout<<"big is b";
    }
    
    cout<<endl;
    int maxi = max(a,b);

    cout<<maxi<<endl;
    cout<<max(a,b)<<endl;
 //max of 3 numbers
    int p = 1;
    int q = 2;
    int r = 3;
    if(p > q){
        if(p > r){
            cout<<"p big"<<endl;
        }else{
            cout<<"r big"<<endl;
        }
    }else{
        if(q>r){
            cout<<"q big"<<endl;
        }else{
            cout<<"r big"<<endl;
        }
    }
    //max can only compare 2 numbers
    int maxii = max(p,max(q,r));
    cout<<maxii<<endl;
     
     //Check Whether a Character is a Vowel or Consonant
    char character ;
    cout<<"enter character to check vowel or consonent : "<<endl;
    cin>>character;
    if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'){
        cout<<"its a vowel \n";
    }else{
        cout<<"its a consonent\n";
    }

    //Check if a Given Year is a Leap Year
    int year;
    cout<<"enter year \n";
    cin>>year;
    if(year%4 == 0){
        cout<<"its a leap year"<<endl;
    }else{
        cout<<"its not a leap year"<<endl;
    }

    //Print Multiplication Table of a Number
    int num2;
    cout<<"enter the number to get the table "<<endl;
    cin>>num2;
    int i = 1;
    while(i < 11){
        cout<<num2*i<<" ";
        i++;
    }
    cout<<endl;
   // Calculate Sum of First n Natural Numbers
   int num3;
   cout<<"enter number to Calculate Sum of First n Natural Numbers"<<endl;
   cin>>num3;
   int sum = 0;
   for(int i = 1 ; i <= num3;i++){
       sum = sum+i;
       //sum+=i;
   }
   cout<<sum<<endl;

   //Find Factorial of a Number
   int num4;
   cout<<"enter the number to Find Factorial of a Number "<<endl;
   cin>>num4;
   int j = num4;
   int fact = num4;
   for(int j = num4 ; j-1 > 0 ; j--){
    fact = fact*(j-1);
   }
   cout<<fact;



}