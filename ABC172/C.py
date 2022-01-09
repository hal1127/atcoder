from math import *
from collections import deque, defaultdict
from functools import reduce

def main():
  N, M, K = list(map(int, input().split()))
  A = list(map(int, input().split()))
  B = list(map(int, input().split()))

  Atot = [0]*N
  for i in range(N):
    if i == 0:
      Atot[i] = A[i]
    else:
      Atot[i] = Atot[i-1] + A[i]
  Btot = [0]*M
  for i in range(M):
    if i == 0:
      Btot[i] = B[i]
    else:
      Btot[i] = Btot[i-1] + B[i]

  ans = 0
  for i in range(N):
    for j in range(M):
      cnt = 0
      t = 0
      # for ii in range(i+1):
      #   t += A[ii]
      #   cnt += 1
      cnt += i+1
      t += Atot[i]
      # for jj in range(j+1):
      #   t += B[jj]
      #   cnt += 1
      cnt += j+1
      t += Btot[j]
      if t <= K:
        ans = max(ans, cnt)

  print(ans)

def main2():
  N, M, K = list(map(int, input().split()))
  A = list(map(int, input().split()))
  B = list(map(int, input().split()))


if __name__ == "__main__":
  main()