# 10進数との対応がずれた26進数
from math import *
from collections import deque, defaultdict
from functools import reduce

def main():
  N = int(input())

  # print(log2(1000000000000001)/log2(26))
  num = N - 1
  ans = ""
  while num > 0:
    ans = chr(ord("a")+num%26) + ans
    num //= 26
    num -= 1

  if num == 0:
    ans = "a" + ans

  print(ans)

if __name__ == "__main__":
  main()