#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=3; j++){
            cout<<i<<" "<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
