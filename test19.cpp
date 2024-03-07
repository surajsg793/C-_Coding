#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<=n-1; j++){
            cout<<((i+j)%2)<<" ";
        }
        cout<<endl;
    }
    return 0;
}