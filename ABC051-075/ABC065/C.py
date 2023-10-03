from math import *
from collections import deque
from functools import reduce

MOD = 10**9+7

def fac(n):
  res = 1
  for i in range(2, n+1):
    res *= i
    res %= MOD

  return res

def main():
  N, M = map(int, input().split())

  if N == M:
    # print(factorial(N)*factorial(M)*2 % MOD)
    print(fac(N) * fac(M) % MOD * 2 % MOD)
  elif abs(N-M) == 1:
    # print(factorial(N)*factorial(M) % MOD)
    print(fac(N) * fac(M) % MOD)
  else:
    print(0)

if __name__ == "__main__":
  main()