import numpy as np
import functools as ft
import itertools as it
import math

def main():
  A, B, H, M = map(int, input().split())

  hd = 360 * H / 12 + 30 * M / 60
  md = 360 * M / 60
  # print(hd, md)

  dd = min(abs(hd - md), 360-abs(hd - md))
  # print(dd)

  dist = math.sqrt(A*A + B*B - 2 * A * B * math.cos(math.radians(dd)))
  print(dist)

if __name__ == "__main__":
  main()