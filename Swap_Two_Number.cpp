#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int x, y, temp;
    cout<<"Enter the value of x and y : ";
    cin>>x>>y;
    cout<<"Before swapping : "<<x<<" "<<y<<endl;
    temp = x;
    x = y;
    y = temp;
    cout<<"After swapping : "<<x<<" "<<y<<endl;
    return 0;
}