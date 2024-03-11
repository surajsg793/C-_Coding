// #include <iostream>
// #include <conio.h>
// using namespace std;

// int main(){
//     char i, j;
//     for (int i = 'A'; i<='E'; i++){
//         for(int j = 'A'; j<= 'E'; j++){
//             cout<<char(j)<<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    char i, j;
    for(int i = 'E'; i>= 'A'; i--){
        for(int j = 'E'; j>= 'A'; j--){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}