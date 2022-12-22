#include <iostream>
using namespace std;

int findDivisor(int num){
   for(int i=2; i<num; i++){
      if(num % i == 0){
         return i;
      }
   }
}

int main(){
   cout << findDivisor(10) << endl;
   cout << findDivisor(97) << endl;
   cout << findDivisor(221) << endl;
}
