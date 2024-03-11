#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    char i,j;
    for (int i = 'A'; i<='E'; i++){
        for (int j = 'A'; j<='E'; j++){
            cout << char(j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}