#include <stdio.h>
#include <string.h>

int main() {
   // Variables
   char name[100] ;
   int count = 0 ;

   // Input parameters
   printf( "Who is the one you love?: " ) ;
   gets( name ) ;
   printf( "How many rounds do you want to repeat?: " ) ;
   scanf( "%d", &count ) ;

   // Output parameter
   printf( "<3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3\n" ) ;
   for( int i = 0 ; i < count ; i++ ) {
      printf( "I love %s\n", name ) ;
   }
   printf( "<3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3\n" ) ;

   return 0 ;
}