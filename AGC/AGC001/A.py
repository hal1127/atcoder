from math import *
from collections import deque, defaultdict
from functools import reduce

def main():
  N = int(input())
  L = list(map(int, input().split()))
  L_srt = sorted(L)

  bbq = 0
  for i in range(0, 2*N, 2):
    bbq += min(L_srt[i], L_srt[i+1])

  print(bbq)

if __name__ == "__main__":
  main()