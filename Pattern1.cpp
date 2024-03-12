#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int n = 5;
    int x;
    char ch = 'A';
    for (int i = 0; i < n; i++){
        x = i;
        for (int j = 0; j < n; j++){
            x +=n;
            cout<<(char)(x-n+ch)<<" ";
    }
    cout<<endl;
}
return 0;
}