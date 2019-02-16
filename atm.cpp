#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	int k = n;
	for (int i = 0; i < n; i++)
	{
		sum += a[i] * k;
		k--;
	}
	
	cout << sum << '\n';
}