from math import *
from collections import deque, defaultdict
from functools import reduce

def main():
  N = int(input())
  a = list(map(int, input().split()))

  ans = sum(a)
  ans %= 100

  print(ans)

if __name__ == "__main__":
  main()