#include<iostream>
#include<cmath>
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
    //Calculate Fahrenheit to Celsius
    int fah = 9;
    float cel = (fah -32)*5/9;
    cout<<cel<<endl;
    // Find Simple Interest
    int prin = 1;
    int rate = 1;
    int time = 100;
    int si = prin*rate*time/100;
    cout<<si<<endl;
    //Area And Perimeter of Rectangle
    int len = 3;
    int bred = 4;
    int peri = 2*(len+bred);
    cout<<peri<<endl;
    int area = len * bred;
    cout<<area<<endl;
    // Find Compound Interest
    int pc = 1;
    int rc = 1;
    int nc = 1;
    int tc = 2;
    float comp = pc* pow((1+rc*nc), nc*tc);
    cout<<comp<<endl;

    return 0;
}