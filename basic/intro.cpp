#include<iostream>
using namespace std;
int main(){
    //various data types with their sizes
    int a = 3;
    long b = 4;
    short c = 5;
    unsigned d = 6;
    signed e = 7;
    float f = 6.89;
    double g = 7.88;
    char abc = 'g';
    bool check = true;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<abc<<" "<<check<<endl;
    cout<<sizeof(a)<<" "<<sizeof(b)<<" "<<sizeof(c)<<" "<<sizeof(d)<<" "<<sizeof(e)<<" "<<sizeof(f)<<" "<<sizeof(g)<<" "<<sizeof(abc)<<" "<<sizeof(check)<<endl;

    //ascii value printing
    int value = 'a';
    cout<<value<<endl;
    
}