#include <iostream>
using namespace std;

long long pado[101];

int main()
{
	
	int t,n;
	cin >> t;
	pado[0] = 0;
	pado[1] = 1;
	pado[2] = 1;

	for (int i = 3; i <= 100; i++)
		pado[i] = pado[i - 2] + pado[i - 3];


	while (t--) {
		cin >> n;
		
		cout << pado[n] << '\n';
	}
}