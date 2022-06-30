//Home work #21
#include <iostream>
using namespace std;

int main() {

	int X, Y;
	cout << "Enter two numbers: ";
	cin >> X >> Y;
	int* px = &X;
	int* py = &Y;
	int res = (*px + *py) / 2;
	cout << "Mean value = " << res << endl;

	return 0;
}
