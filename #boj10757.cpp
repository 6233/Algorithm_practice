#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
}