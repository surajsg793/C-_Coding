#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int n = 5;
    int x;
    char ch = 'A';
    for (int i = 1; i <= n; i++){
    x = n-i;
    for (int j = 1; j <= n; j++){
        cout<<(char)(x+ch)<<" ";
        x +=n;
    }
    cout<<endl;
}
return 0;
}