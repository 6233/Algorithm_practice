#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;

double favor[501] = { 0 };

int main()
{
	int n, k;

	cin >> n >> k;

	vector<double> a;

	for (int i = 1; i <= n; i++)
	{
		cin >> favor[i];
	}

	int left = 1;
	int right = k;
	while (left + k != n + 1)
	{
		double aver = 0;
		
		for (int i = left; i <= right; i++)
		{
			aver += favor[i];
		}
		double m;
		m = aver / (right - left+1);
		double boonsan = 0;
		for (int i = left; i <= right; i++)
		{
			boonsan += (favor[i] - m)*(favor[i] - m);
		}
		double pyo;
		pyo = boonsan / (right - left + 1);
		a.push_back(pyo);
		
		if (right < n) {
			++right;
		}
		else
		{
			++left;
			right = left + k-1;
		}
		
	}


	auto ans = *min_element(a.begin(), a.end());
	printf("%.11lf\n", ans);

}