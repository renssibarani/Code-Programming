#include <stdio.h>

int reverse(int x) {
  int temp = x;
  int ret = 0;

  while (temp > 0) {
    ret = (ret * 10) + (temp % 10);
    temp = temp / 10;
  }

  return ret;
}

int main() {
  int a, b, C;
  scanf("%d %d", &a, &b);

  C = reverse(a) + reverse(b);


  printf("%d", reverse(C));
}
