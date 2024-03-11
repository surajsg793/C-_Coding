#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int num = 5;
    for (int i = 1; i<=num; i++){
        for(int j = 0 ; j <= num-1; j++){
            cout<<(i*j)%2<<" ";
        }
        cout<<endl;
    }
    return 0;
}