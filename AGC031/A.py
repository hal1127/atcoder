from collections import deque
from functools import reduce
import collections

def main():
  N = int(input())
  S = input()

  dic = collections.Counter(S)
  # print(dic)

  ans = 1
  for d in dic.values():
    # その文字を選ぶパターン + 選ばないパターン
    ans *= d + 1
    ans %= 10**9+7

  # 全て選ぶパターンは除く
  print(ans-1)

if __name__ == "__main__":
  main()