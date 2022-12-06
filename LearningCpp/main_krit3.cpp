#include <iostream>

using namespace std;

int main() {
   int num[100];
   int round = 0;
   int max = -999;
   int min = 999;

   cout << "Input round: ";
   cin >> round;
   for( int i = 0; i < round; i++ ) {
      cout << "Input Array[" << i + 1 << "]: ";
      cin >> num[i];
   }

   for( int i = 0; i < round; i++ ) {
      if( num[i] > max ) {
         max = num[i];
      }
      if( num[i] < min ) {
         min = num[i];
      }
   }

   cout << "Max Value: " << max << endl;
   cout << "Min Value: " << min << endl;

   return 0;
}