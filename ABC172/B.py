from math import *
from collections import deque, defaultdict
from functools import reduce

def main():
  S = input()
  T = input()

  ans = 0
  for i in range(len(S)):
    if S[i] != T[i]:
      ans += 1

  print(ans)

if __name__ == "__main__":
  main()