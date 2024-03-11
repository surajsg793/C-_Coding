#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int i,j=2, ch = 0;
    cout<<"Enter a number : ";
    cin>>i;

    if(i<=1)
    {
        ch = 1;
    }

    while (j<=i/2)
    {
        if(i%j == 0){
            ch =1;
            break;
        }
        else{
            j++;
        }
    }
    if(ch==0){
        cout<<i<<" is a prime number."<<endl;
    }
    else{
        cout<<i<<" is not a prime number."<<endl;
    }
    
}