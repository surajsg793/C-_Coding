#include <iostream>
#include<conio.h>
using namespace std;

int main(){
    int n = 5;
    char ch = 'A';
    for (int i = 0; i<=n; i++){
        for(int j = 0; j<=n; j++){
            cout<<(char)(i+j+ch)<<" ";
        }
        cout<<endl;
    }
    return 0;
}