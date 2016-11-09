#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Insert rows: ";
    cin >> rows;
    for(int i = 1; i <= rows ; i++){
        for (int j = i; j < rows; j++){
            cout << j;
        }
    }
    system("pause");
    return 0;
}
