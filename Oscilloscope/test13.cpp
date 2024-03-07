// 1 6 11 16 21
// 2 7 12 17 22
// 3 8 13 18 23
// 4 9 14 19 24
// 5 10 15 20 25

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n = 5;
    int x, y;
    for (int i = 1; i<=n; i++){
        x = i;
        y=n-i+1;
        for(int j = 1; j<=n; j++){
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
