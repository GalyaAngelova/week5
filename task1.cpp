#include <iostream>
using namespace std;

int main () {
    int num;
	cout << "Input number: ";
	cin >> num;
	int sum=0;
	for (int i = 0; i <= num; ++i)
	{
		sum += i;
	}
	cout << "Sum" << '='<< sum << endl;

    return 0;
}
