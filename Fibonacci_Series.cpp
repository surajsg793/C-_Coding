// #include <iostream>
// #include <conio.h>
// using namespace std; 

// int main(){
//     int n;
//     int first = 0;
//     int second = 1;
//     cout<<"Enter the number of terms : ";
//     cin>>n;
//     cout<<"Fibonacci Series : ";
//     for(int i = 1; i<=n; i++){
//         cout<<first<<" ";
//         int temp = first;
//         first = second;
//         second = temp + second;
//         cout<<endl;

//     }
//     return 0;
// }

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int first_no = 0;
    int second_no = 1;
    int result, user_no, count = 0;
    cout<<"Enter any Number : ";
    cin>>user_no;
    while (1)
    {
        result = first_no + second_no;
        count++;
        if(result >= user_no){
            break;
    }
    first_no = second_no;
    second_no = result;
    cout<<"\nFibonacci No. ["<<count<<"]->"<<result;
    }
    return 0;
}
