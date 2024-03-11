#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    int max_num(int a[], int n);
    int max, i , n;
    int a[50];
    cout<<"Enter n the numbers: ";
    cin>>n;
    cout<<"Enter the numbers: ";
    for(i=0; i<n; i++){
        cin>>a[i];
        max = max_num(a,n);
        cout<<"The largest number is :"<<max<<endl;
        return 0;
    }
}


int max_num(int a[], int n)
{
    int i, m = 0;
    for(i=0; i<n; i++){
        if(a[i]>m){
            m = a[i];
        }
    }
    return m;
}


    

