#include <iostream>
using namespace std;

int main() {
    int score;
    string grade;
    cout << "Your score is " ;
    cin >> score;
    cout << "===============================" << endl;
    if(score>=80 && score<=100){
        grade = "A";
    }
    else if(score>=70 && score<=79){
        grade = "B";
    }
    else if(score>=60 && score<=69){
        grade = "C";
    }
    else if(score>=50 && score<=59){
        grade = "D";
    }
    else{
        grade = "F";
    }
    cout << "Grade your is " << grade << endl;
}