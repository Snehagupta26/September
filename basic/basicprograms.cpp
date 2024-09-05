#include<iostream>
using namespace std;
int main(){
    // Hello World
    cout<<"Hello World"<<endl;
    // Print Your Own Name
    cout<<"Sneha Gupta"<<endl;
    // Get Input from the User
    cout<<"enter a number : ";
    int n ;
    cin>>n;
    cout<<endl;
    cout<<"number is "<<n<<endl;
    
    // Add Two Numbers
    int a = 3;
    int b = 3;
    cout<<"additon is : "<<a+b<<endl;

    // Swap two numbers
    int num1 = 23;
    int num2 = 56;
    cout<<"numbers before swapping are : "<<num1<<" "<<num2<<endl;
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"numbers after swapping are : "<<num1<<" "<<num2<<endl;
    
    // Find the Size of int, float, double, and char
    cout<<sizeof(1)<<" "<<sizeof(1.45)<<" "<<sizeof(1.897856473626456789)<<" "<<sizeof('a')<<endl;
    
    //  Multiply Two Floating-Point Numbers  
    float f1 = 2.34;
    float f2 = 6.68;
    cout<<f1*f2<<endl;

    int f11 = 2.34;
    int f22 = 6.68;
    cout<<f11*f22<<endl;

    // Print the ASCII Value of a Character 
    int vowel = 'a';
    cout<<vowel<<endl;

    

    return 0;
}