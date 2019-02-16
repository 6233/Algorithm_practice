#include <iostream>
#include <algorithm>
#define num 100001
using namespace std;

class Node {
public:
	int left;
	int right;
	int order;
	int depth;
};

Node a[num];

int lef[num];
int rig[num];
int cnt[num];

int order = 0;

void inorder(int node, int depth)
{
	if (node == -1) return;
	inorder(a[node].left, depth + 1);
	a[node].order = ++order;
	a[node].depth = depth;
	inorder(a[node].right, depth + 1);
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y, z;

		cin >> x >> y >> z;

		a[x].left = y;
		a[x].right = z;

		if (y != -1)
			cnt[y]++;
		if (z != -1)
			cnt[z]++;

	}

	int root = 0;
	for (int j = 1; j <= n; j++)
	{
		if (cnt[j] == 0)
			root = j;
	}

	inorder(root, 1);
	int dep = 0;
	for (int i = 1; i <= n; i++)
	{
		int depth = a[i].depth;
		int order = a[i].order;
		if (lef[depth] == 0)
			lef[depth] = order;
		else
			lef[depth] = min(lef[depth], order);

		rig[depth] = max(rig[depth], order);
		dep = max(dep, depth);
	}

	int ans = 0;
	int ans_level = 0;
	for (int i = 1; i <= dep; i++)
	{
		if(ans < rig[i] - lef[i] + 1)
		{
			ans = rig[i] - lef[i] + 1;
			ans_level = i;
		}
	}

	cout << ans_level << ' ' << ans << '\n';
	return 0;
}