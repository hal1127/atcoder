N = int(input())
L = list(map(int, input().split()))
L.sort()

if L[len(L)-1] < sum(L[:len(L)-1]):
    print("Yes")
else:
    print("No")