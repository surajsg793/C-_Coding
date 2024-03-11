#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int x;
    cout<<"Enter an Integer Number : ";
    cin>>x;
    if(x%2==0)
        cout<< x <<" is Even Number";
    else
        cout<< x <<" is Odd Number";
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//   int n;

//   cout << "Enter an integer: ";
//   cin >> n;

//   if ( n % 2 == 0)
//     cout << n << " is even.";
//   else
//     cout << n << " is odd.";

//   return 0;
// }
