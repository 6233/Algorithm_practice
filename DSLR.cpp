#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;


bool check[10005];
string how[10005];

void go(int from, int to)
{
	queue<int> a;

	memset(check, 0, sizeof(check));
	memset(how, 0, sizeof(how));
	a.push(from);
	how[from] = "";
	check[from] = true;
	while (1)
	{
		int p = a.front();
		a.pop();
		//D
		if (check[(p * 2) % 10000] != true) {
			a.push((p * 2) % 10000);
			how[(p * 2) % 10000] = how[p] + "D";
			check[(p * 2) % 10000] = true;
			if ((p* 2) % 10000 == to)
			{
				cout << how[(p*2) % 10000] << '\n';
				break;
			}

		}
		//S
		if (p == 0) {
			if (check[9999] != true) {
				a.push(9999);
				how[9999] = how[0] + "S";
				check[9999] = true;
				if (9999 == to) {
					cout << how[0] + "S" << '\n';
					break;
				}
			}
		}
		else if (check[(p - 1)] != true)
			{
				a.push(p - 1);
				how[p - 1] = how[p] + "S";
				check[p - 1] = true;
				if (p - 1 == to) {
					cout << how[p-1] << '\n';
					break;
				}
			}			

			//L
			if (check[(p% 1000) * 10 + p / 1000] != true) {
				a.push((p % 1000) * 10 + p / 1000);
				how[(p % 1000) * 10 + p / 1000] = how[p] + "L";
				check[(p % 1000) * 10 + p / 1000] = true;
				if ((p % 1000) * 10 + p / 1000 == to)
				{
					cout << how[(p % 1000) * 10 + p / 1000] << '\n';
					break;
				}
			}
			//R
			if (check[(p / 10) + (p % 10) * 1000] != true) {
				a.push((p / 10) + (p % 10) * 1000);
				how[(p / 10) + (p % 10) * 1000] = how[p] + "R";
				check[(p / 10) + (p % 10) * 1000] = true;
				if ((p / 10) + (p % 10) * 1000 == to)
				{
					cout << how[(p / 10) + (p % 10) * 1000] << '\n';
					break;
				}
			}

	}
}

int main()
{
	int n;

	cin >> n;


for(int i=0; i<n; i++){
		int a, b;
		cin >> a >> b;

		go(a, b);
	}
}