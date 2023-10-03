# メモ、差分の利用
from math import *
from collections import deque, defaultdict
from functools import reduce

def main():
  N = int(input())
  A = list(map(int, input().split()))
  Q = int(input())
  BC = []
  for _ in range(Q):
    BC.append(list(map(int, input().split())))

  nums_cnt = defaultdict(int)
  for a in A:
    nums_cnt[a] += 1

  su = 0
  for key in nums_cnt:
    su += nums_cnt[key] * key

  for b, c in BC:
    su += nums_cnt[b] * (c - b)
    print(su)

    nums_cnt[c] = nums_cnt[b] + nums_cnt[c]
    nums_cnt[b] = 0

if __name__ == "__main__":
  main()