# // 문제
# // 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

# // 입력
# // 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

# // 출력
# // 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.

# // 예제 입력 1 
# // 1
# // 예제 출력 1 
# // *
# // 예제 입력 2 
# // 2
# // 예제 출력 2 
# //  *
# // * *
# // 예제 입력 3 
# // 3
# // 예제 출력 3 
# //   *
# //  * *
# // * * *
# // 예제 입력 4 
# // 4
# // 예제 출력 4 
# //    *
# //   * *
#   * * *
#  * * * *

# #include <iostream>
# using namespace std;

# int main()
# {
#     int n;
#     cin >> n;

#     for (int i = 1; i <=n; ++i) {
#         for (int j = n-i; j>0; --j) {
#             cout << " ";
#         }
#         for (int k = 1; k<=i; k++) {
#             cout << "* ";
#         }
#         cout << "\n";
#     }

#     return 0;
# }

# n = int(input())

# for i in range(1,n+1):
#     k = 1
#     j = n-i
#     while j > 0:
#         print(" ", end='')
#         j = j-1
#     while k <= i:
#         print("* ", end='')
#         k = k + 1
#     print("")

n = int(input())
for i in range(1,n+1):
    print(f'{"*"+" *"*(i-1):>{2*n-1}}'.rstrip())

# print(f'{"1234567890":^{3}}'.rstrip())

# https://www.geeksforgeeks.org/string-alignment-in-python-f-string/