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
	
	for (int i = 1; i <= n - k + 1; i++) {
		int cnt = k;
		double aver=0;
		int j = i;
		while (j < n + 1) {
			int y = i;
			double boonsan = 0;

			for (; j < i + cnt; j++)
			{
				aver += favor[j];
			}
			double m;
			m = aver / cnt;

			for (; y < i + cnt; y++)
			{
				boonsan += (favor[y]-m)*(favor[y] - m);
			}
			double pyo;
			
			pyo = sqrt(boonsan / cnt);

			a.push_back(pyo);
			cnt++;

			
			
		}
	}
	
	auto ans = *min_element(a.begin(), a.end());
	printf("%.11lf\n", ans) ;

}