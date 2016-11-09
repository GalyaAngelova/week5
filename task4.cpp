#include <iostream>
using namespace std;

int main(){
    int num;
    bool flag = true;
    cout << "Insert a number to check if it is prime: ";
    cin >> num;
    for (int i = 2; i < num && flag; i++)
    {
        flag = num % i;
    }
    cout << (flag ? "Yes" : "No");
    system("pause");
    return 0;
}
