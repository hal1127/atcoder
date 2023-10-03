from collections import deque

def main():
  N, M = map(int, input().split())
  AB = [list(map(int, input().split())) for _ in range(M)]
  A, B = list(map(list, zip(*AB)))
  # print("------------")

  tree = [[] for _ in range(N+1)]
  for i in range(M):
    tree[A[i-1]].append(B[i-1])
  for i in range(M):
    tree[B[i-1]].append(A[i-1])
  # print(tree)
  # print("------------")

  ms = [-1 for _ in range(N+1)]
  q = deque()
  q.append((0, 1))
  while len(q) > 0:
    nowq = q.popleft()
    pos, bra = nowq

    if ms[bra] == -1:
      ms[bra] = pos
      for x in tree[bra]:
        q.append((bra, x))
      # print(pos, bra)

  print("Yes")
  for i in range(2, N+1):
    print(ms[i])


if __name__ == "__main__":
  main()