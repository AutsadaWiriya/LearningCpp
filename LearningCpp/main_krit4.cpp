#include <iostream>

using namespace std;

int main() {
   int arr[4][4] = {
      { 10, 20, 30, 40 },
      { 11, 21, 31, 41 },
      { 12, 22, 32, 42 },
      { 13, 23, 33, 43 }
   };
   
   int ( *j )[ 4 ] = arr ;
   j[0][3] = 99;

   for( int i = 0; i < 4; i++ ) {
      for( int j = 0; j < 4 ; j++ ) 
         cout << arr[i][j] << " " ;
      cout << endl;
   }

}