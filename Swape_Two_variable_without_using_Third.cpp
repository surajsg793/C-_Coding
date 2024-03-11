#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the value of a :";
    cin>>a;
    cout<<"Enter the value of b :";
    cin>>b;
    cout<<"Before swapping : "<<a<<" "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"After swapping : "<<a<<" "<<b<<endl;
    return 0;
}