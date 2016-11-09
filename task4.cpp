#include <iostream>
using namespace std;

int main(){
    int num;
    bool flag = true;
    cout << "Insert a number: ";
    cin >> num;
    for (int i = 2; i < num && flag; i++)
    {
        flag = num % i;
    }
    cout << "Is it prime? " << (flag ? "Yes" : "No");

    return 0;
}
