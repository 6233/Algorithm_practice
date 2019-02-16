#include <iostream>
using namespace std;

int festive2017[101] = { 0, 500, 300,300, 200,200,200,50,50,50, 50, 30,30,30,30,30 ,10,10,10,10,10,10,0 };
int festive2018[65] = { 0,512, 256,256, 128,128, 128, 128, 64,64, 64, 64, 64, 64, 64, 64, 32,32,32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,0 };

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;

		if (festive2017[a] + festive2018[b] == 0)
			cout << 0 << '\n';
		else
		cout << festive2017[a]+festive2018[b]<<"0000"<<'\n';
	}

}