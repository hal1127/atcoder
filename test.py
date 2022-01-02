from math import *
from collections import deque
from functools import reduce

class Edges:
  def __init__(self, frm, to, cost):
      self.frm = frm
      self.to = to
      self.cost = cost

class UnionFind:
  def __init__(self, n):
    self.n = n
    self.par = [-1] * n

  def root(self, a):
    if self.par[a] < 0:
      return a
    self.par[a] = self.root(self.par[a])
    return self.par[a]

  def same(self, a, b):
    return self.root(a) == self.root(b)

  def size(self, a):
    return -self.par[self.root(a)]

  def unite(self, a, b):
    a = self.root(a)
    b = self.root(b)

    if (a == b):
      return False

    # 大きいほうに小さいほうを結合したいので、swap
    if self.size(a) < self.size(b):
      # swap
      a, b = b, a

    self.par[a] += self.par[b]
    self.par[b] = a

    return True



def main():
  uf = UnionFind(5)
  print(uf.par)
  uf.unite(0, 1)
  print(uf.par)
  uf.unite(2, 3)
  print(uf.par)
  uf.unite(0, 2)
  print(uf.par)
  uf.root(3)
  print(uf.par)

if __name__ == "__main__":
  main()