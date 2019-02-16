#include <iostream>
using namespace std;

int go(int M, int N, int x, int y)
{
	for (int i = x-1; i <= N*M; i+=M)
	{
		if (i%N== y-1)
			return i+1;
	}
	return -1;

}

int main()
{
	int t;
	cin>> t;
	
	for (int i = 0; i < t; i++) {
		int M, N, x, y;
		cin >> M>> N>> x>> y;
	cout << go(M, N, x, y) << '\n';
	}

}