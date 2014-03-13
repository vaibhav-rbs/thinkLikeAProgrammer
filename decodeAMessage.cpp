#include <iostream>
using namespace std;
int main(){
    cout << "Enter A Two Digit Number:" ;
    char digitChar1 = cin.get();
    char digitChar2 = cin.get();
    int digit1 = digitChar1 - '0';
    int digit2 = digitChar2 - '0';
    int overallNumber = digit1*10 + digit2;
    cout << "That number as integer is:" << overallNumber << "\n";
    return 0;
}    
