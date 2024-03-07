#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int n = 5;
    int x, y;
    for(int i = n; i>=1; i--){
        x = i;
        y = n-i+1;
        for(int j = n; j>=1; j--){
            if (j%2==1){
                cout<<x<<" ";
            }
            else{
                cout<<y<<" ";
            }
            x = x+n;
            y = y+n;
        }
        cout<<endl;
    }
    return 0;
}