#include <iostream>
using namespace std;

int main (){
    int p,q;
    cout << "Insert p: ";
    cin >> p;
    cout << "Insert q: ";
    cin >> q;
    bool flag = true;
    if (p < q){
        for (int i = p ; i <= q; i++) {
            flag = true;
            for(int j = 2; j < i; j++){
                if (i % j == 0) {
                    flag = false;
                }
            }
            if (flag) cout << i << " " << endl;
        }
        cout << endl;
    }
    else cout << "Wrong numbers." << endl;
    system("pause");
    return 0;
}
