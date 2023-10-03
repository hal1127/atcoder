# ソート
from math import *
from collections import deque, defaultdict
from functools import reduce

def main():
  N, K = map(int, input().split())
  p = list(map(int, input().split()))

  sorted_p = sorted(p)

  print(sum(sorted_p[:K]))

if __name__ == "__main__":
  main()