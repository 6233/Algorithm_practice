// 1부터 N까지의 수를 이어서 쓰면 다음과 같이 새로운 하나의 수를 얻을 수 있다.

// 1234567891011121314151617181920212223...

// 이렇게 만들어진 새로운 수는 몇 자리 수일까? 이 수의 자릿수를 구하는 프로그램을 작성하시오.


// 1 ~ 9 = 1 (9)
// 10~99 = 2 (90)
// 100~999 = 3 (900)
// 1000 ~ 9999 = 4 (9000)
// 10000 ~ 99999 = 5 (90000)
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n;
  int count = 0;
  int result = 0;
  cin >> n; 
  int origin = n;
  while (true) {
    int x = n / 10;
    if ( x >= 1) {
      result += (9 * pow(10, count)) * (count + 1);
      count++;
      n = (n / 10);
    } else {
      result += (origin - pow(10 , count) + 1) * (count + 1);
      break;
    }
  }

  cout << result << '\n';

  return 0;
}