from math import *
from collections import deque, defaultdict
from functools import reduce

def main():
  A = list(map(int, input().split()))
  ans = reduce(lambda a, b: a*b, A)
  
  print(ans)

if __name__ == "__main__":
  main()