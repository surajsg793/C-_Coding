#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

// int main(){
//     char a[100], b[100];
//     cout<<"Enter the String to check Palindrome : ";
//     cin>>a;
//     int i, j, len = strlen(a);
//     for (i = 0, j = len-1; i < j; i++, j--){
//         if (a[i]== a[j]){
//             cout<<"This is a Palindrome";
//         }
//         else{
//             cout<<"This is not a Palindrome";
//         }
//             return 0;
//         }
//     }

int main(){
    char a[100], b[100];
    cout<<"Enter the String to check Palindrome : ";
    cin>>a;
    strcpy(b, a);
    strrev(b);
    if(strcmp(a, b) == 0){
            cout<<"This is a Palindrome";
        }
        else{
            cout<<"This is not a Palindrome";
        }
        return 0;
    }