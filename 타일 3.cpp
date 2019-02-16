#include <iostream>
using namespace std;

long long D[31][8];

int main() {
	int n;
	cin >> n;
	D[0][7] = 1;
	for (int i = 1; i <= n; i++) {
		D[i][0] = D[i - 1][7];
		D[i][1] = D[i - 1][4];
		D[i][2] = D[i - 1][5];
		D[i][4] = D[i - 1][1] + D[i-1][7];
		D[i][3] = D[i - 1][7] + D[i - 1][6];
		D[i][6] = D[i - 1][3];
		D[i][5] = D[i - 1][2];
		D[i][7] = D[i - 1][0] + D[i - 1][4] + D[i - 1][3];

	}
	cout << D[n][7] << '\n';
	return 0;
}