#include <iostream>
using namespace std;
int main() {
	double a = 0.12345678;
	double b = 0.12345678;
	float c = 0.12345678;
	if (a == b && b == c && c != a) {
		cout << "true" << '\n';
	}
	else {
		cout << "false" << '\n';
	}
	return 0;
}