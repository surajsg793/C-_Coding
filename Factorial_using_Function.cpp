
#include<iostream>

using namespace std;

void factors(int num) {
   int i;
   for(i=1; i <= num; i++) {
      if (num % i == 0)
      cout << i << " ";
   }
}
int main() {
   int num;
   cout << "Enter Number For Factorial : ";
   cin>>num;
   factors(num);
   return 0;
}