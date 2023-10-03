from math import *
from collections import deque, defaultdict
from functools import reduce

def main():
  N, X, Y = map(int, input().split())

  ans = floor(N / X)
  ans += floor(N / Y)
  ans -= floor(N / (X*Y))

  print(ans)

if __name__ == "__main__":
  main()