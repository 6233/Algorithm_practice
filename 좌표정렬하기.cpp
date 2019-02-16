#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int n;

	cin >> n;

	vector<pair<int, int>> p(n);

	int x, y;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		p[i].first = x; p[i].second = y;
	}

	sort(p.begin(), p.end());
	for (int i = 0; i < n; i++)
		cout << p[i].first << ' ' << p[i].second << '\n';
}