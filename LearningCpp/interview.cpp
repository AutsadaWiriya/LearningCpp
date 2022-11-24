#include <iostream>
using namespace std;

int main(){
   int age;
   string gender;
   cout << "Input your gender = " ;
   cin >> gender;
   cout << "Input your age = " ;
   cin >> age;

   cout << "-----Description-----" << endl;
   cout << "Your gender = " << gender << endl;
   cout << "Your age = " << age << endl;

   bool condition1 = gender == "male" || gender == "female" ;
   bool condition2 = age >= 25 ;

   cout << "==========================================" << endl;
   cout << "Status " << endl;
   if(condition1 && condition2){
      cout << "Pass Interview" << endl;
   }
   else{
      cout << "Not pass Interview" << endl;
   }
}