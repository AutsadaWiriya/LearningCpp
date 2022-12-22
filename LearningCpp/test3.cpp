#include <iostream>

using namespace std;

int main(){
   int num, j = 0 ;
   cout << "Input Number: " ;
   cin >> num ;
   cout << "สมาชิก : " ;
   for(int i = 2 ; i < num/2 ; i++){
      if(num % i == 0){
         cout << i << "  " ;
         j++;
      }
   }
   if(j > 0){
      cout << endl << "ไม่ใช่จำนวนเฉพาะ" ;
   }else{
      cout << endl << "ใช่จำนวนเฉพาะ" ;
   }
}
