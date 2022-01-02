from collections import deque
from functools import reduce

def main():
  N = int(input())
  a = list(map(lambda x: int(input()), range(N)))
  a.insert(0, -1)
  is_pushed = [False] * len(a)

  is_pushed[1] = True
  nxt = a[1]
  cnt = 1
  while True:
    if nxt == 2:
      print(cnt)
      return
    if is_pushed[nxt]:
      print(-1)
      return
    is_pushed[nxt] = True
    nxt = a[nxt]
    cnt += 1

if __name__ == "__main__":
  main()