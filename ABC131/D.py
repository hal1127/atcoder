# 区間スケジューリング問題
import numpy as np

def main():
  N = int(input())
  A, B = np.array([list(map(int, input().split())) for _ in range(N)]).T
  ord = sorted(range(N), key=lambda x: B[x])

  t = 0
  for i in range(N):
    a = A[ord[i]]
    b = B[ord[i]]

    t += a
    if b < t:
      print("No")
      return

  print("Yes")

if __name__ == "__main__":
  main()