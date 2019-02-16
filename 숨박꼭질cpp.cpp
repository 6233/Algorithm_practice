#include <iostream>
#include <queue>
using namespace std;

queue<int> bfs;
int check[200001] = {0};
int cnt[200001] = { 0 };

int main()
{
	int x, y;
	cin >> x >> y;

	bfs.push(x);
	check[x] = 1;
	while (!bfs.empty())
	{	
		 x = bfs.front();
		bfs.pop();
		if (x - 1 >= 0)
			if (check[x - 1] == 0) {
				bfs.push(x - 1);
				check[x - 1] = 1;
				cnt[x - 1] = cnt[x]+1;
			}
		if (x + 1 < 200000)
			if (check[x + 1] == 0) {
				bfs.push(x + 1);
				check[x + 1] = 1;
				cnt[x + 1] = cnt[x]+1;
			}
		if(2*x <200000)
			if (check[2 * x] == 0) {
				bfs.push(2 * x);
				check[2 * x] = 1;
				cnt[2 * x] = cnt[x]+1;
			}
		
	}
		cout << cnt[y] << '\n';
}