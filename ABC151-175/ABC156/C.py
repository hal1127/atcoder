N = int(input())
X = [int(x) for x in input().split()]

ave = sum(X) // N
E1 = []
E2 = []

for i in X:
    E1.append((i - ave-1) ** 2)
    E2.append((i - ave) ** 2)
    
print(min(sum(E1), sum(E2)))