#include <iostream>
using namespace std;

int main () {


    int num;
    cout << "Enter a number between 5 and 20: ";
    cin >> num;
    switch(num <=20 && num >= 5){
    case (1) : cout << (num % 2 == 0 ? "Even" : "Odd") << endl;
    break;
    default : cout << "Wrong number!" << endl;
    }
    system("pause");
    return 0;
}

