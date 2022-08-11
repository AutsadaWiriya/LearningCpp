#include <iostream>
using namespace std;

int main() {
    float score;
    cout << "your score is ";
    cin >> score;
    if(score >= 70) {
        cout << "Very good";
    }
    else if(score >=50)
    {
        cout << "good";
    }
    
    else{
        cout << "bad";
    }
}