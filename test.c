#include<stdio.h>
#define N 2
int main()
{
  int arr[N] = {0, 1};

  // arr[2]があった場合は、偶数か確認する（ない場合、エラーが出るため）
  if (N > 2) {
    if (arr[2] % 2 == 0) {
      puts("arr[2]は偶数です。");
    } else {
      puts("arr[2]は奇数です。");
    }
  } else {
    puts("arr[2]は存在しません。");
  }

  // これで大丈夫！
  // 短絡評価のため、N > 2が偽だった場合はarr[2] % 2 == 0は実行されない。
  if (N > 2 && arr[2] % 2 == 0) {
    puts("arr[2]は偶数です。");
  } else {
    puts("arr[2]は奇数か、存在しません。");
  }
}
