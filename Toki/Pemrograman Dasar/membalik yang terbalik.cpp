#include <bits/stdc++.h>

using namespace std;

int reverse(int x) {
  int temp = x;
  int ret = 0;

  while (temp > 0) {
    ret = (ret * 10) + (temp % 10);
    temp = temp / 10;
  }

  return ret;
}

int main(void) {
  int a, b, C, d, e, f;
  cin >> a >> b;

  C = reverse(a);
  d = reverse(b);
  e = C + d;
  f = reverse(e);

  cout << f << endl;
}