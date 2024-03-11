#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int num = 5;
    for(int i = 0; i<=num-1; i++){
        for(int j = 1; j<=num; j++){
            cout<<(i%2)<<" ";
        }
        cout<<endl;
    }
    return 0;
}