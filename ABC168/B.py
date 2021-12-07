import numpy as np
import functools as ft
import itertools as it
import math as mt

def main():
  K = int(input())
  S = input()

  if len(S) > K:
    print(S[:K]+"...")
  else:
    print(S)

if __name__ == "__main__":
  main()