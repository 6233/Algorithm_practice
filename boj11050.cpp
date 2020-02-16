// 문제
// 자연수 과 정수 가 주어졌을 때 이항 계수 를 구하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 과 가 주어진다. (1 ≤  ≤ 10, 0 ≤  ≤ )

// 출력
//  nCk 를 출력한다.

#include <iostream>
using namespace std;

int factorial(int n)
{
  if (n == 0 || n ==1) {
    return 1;
  } else {
    return n * factorial(n-1);
  }
}

int main() {
  int a, b;

  cin >> a >> b;

  cout << factorial(a)/(factorial(b)*factorial(a-b)) << '\n';

  return 0;
}