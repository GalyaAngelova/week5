#include <iostream>
using namespace std;

int main() {
  int a;
	int b;
	cout << "Input number: " ;
	cin >> a;
	cout << "Input number: " ;
	cin >> b;
	int sum = 1;
	if (a < b){
	for (int i = a; i <= b; ++i) {
		sum *= i;
	}
	cout << "Sum = " << sum << endl;
	}
	else cout << "Wrong numbers. The first number should be less than the second" ;
  system("pause");
  return 0;
  }
