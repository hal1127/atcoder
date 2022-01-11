from math import *
from collections import deque, defaultdict
from functools import reduce

def main():
  N, M, K = list(map(int, input().split()))
  A = list(map(int, input().split()))
  B = list(map(int, input().split()))

  Atot = [0] * (N+1)
  Atot[0] = 0
  for i in range(1, N+1):
    Atot[i] = Atot[i-1] + A[i-1]

  Btot = [0] * (M+1)
  Btot[0] = 0
  for i in range(1, M+1):
    Btot[i] = Btot[i-1] + B[i-1]

  ans = 0
  for i in range(N+1):
    if Atot[i] > K:
      break

    left = -1
    right = len(Btot)
    while (right - left) > 1:
      mid = (left + right) // 2
      if (Atot[i] + Btot[mid]) <= K:
        left = mid
      else:
        right = mid

    ans = max(ans, left+i)

  print(ans)

if __name__ == "__main__":
  main()