#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double j, Series = 0, sum = 0;
   double a ;
   cout << "Input : " ;
   cin >> j ;

   for( int i = 0; i < j ; i++ ) {
      a = pow( 10, i ) ;
      Series = 9 * a + Series ;
      if( i != 0 ) cout << " + " ;
      cout << Series  ;
      sum = sum + Series ;
   }

   cout << "\n" << "Output : " << sum ;
   return 0 ;
}