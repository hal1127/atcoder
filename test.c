#include<stdio.h>
#define N 2
int main()
{
  int arr[N] = {0, 1};

  if (N > 2) {
    if (arr[2] % 2 == 0) {
      puts("arr[2]は偶数です。");
    } else {
      puts("arr[2]は奇数です。");
    }
  } else {
    puts("arr[2]は存在しません。");
  }

  if (N > 2 && arr[2] % 2 == 0) {
    puts("arr[2]は偶数です。");
  } else {
    puts("arr[2]は奇数か、存在しません。");
  }
}
