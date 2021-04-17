#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;


// reverse(s.begin(), s.end())
void reverseStr(string& str) 
{ 
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 

string doSomething(string a, string b) {
  string c = "0";
  int i = 0;

  while (i < a.length() || i < b.length()) {
    int x = 0, y = 0, z = 0;

    if (i < a.length()) {
      x = a[i] - '0';
    }

    if (i < b.length()) {
      y = b[i] - '0';
    }
    if (c[i] > '0' && c[i] <= '9') {
      z = c[i] - '0';
    } 
    int sum = x+y+z;
    if (sum > 9) {
      c.append("1");
    } else if (i < a.length()-1 && i < b.length()) {
      c.append("0");
    }

    int temp = (sum) % 10;
    c.replace(i,1,std::to_string(temp));
    i++;
  }

  reverseStr(c);
  return c;


}


int main()
{
  string s1, s2;
  cin >> s1 >> s2;

  
  reverseStr(s1);
  reverseStr(s2);
  cout << doSomething(s1,s2) << '\n';



  return 0;
}