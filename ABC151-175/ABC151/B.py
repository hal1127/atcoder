from math import *
from collections import deque, defaultdict
from functools import reduce

def main():
  N, K, M = list(map(int, input().split()))
  A = list(map(int, input().split()))

  ans = M*N
  for i in range(N-1):
    ans -= A[i]

  if ans > K:
    print(-1)
  else:
    print(max(0, ans))

if __name__ == "__main__":
  main()