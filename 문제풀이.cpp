#include <iostream>
#include <cstdio>
#pragma warning(disable: 4996)
using namespace std;

int main()
{
	char what[101];
	long long a, b, c, d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

	long long A, B;

	sprintf(what, "%lld%lld %lld%lld", a, b, c, d);
	sscanf(what, "%lld %lld", &A, &B);

	printf("%lld\n", A + B);

	return 0;
}

