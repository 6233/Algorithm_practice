#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int size = n;
    for (int i=1; i <= n; i++) {
        for (int j = n-i; j > 0; j--) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("#");
        }
        printf("\n");
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
