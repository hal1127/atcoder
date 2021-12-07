import numpy as np
import functools as ft
import itertools as it
import math as mt

def main():
  hon = [2, 4, 5, 7, 9]
  pon = [0, 1, 6, 8]

  N = int(input())

  if N % 10 in hon:
    print("hon")
  elif N % 10 in pon:
    print("pon")
  else:
    print("bon")


if __name__ == "__main__":
  main()