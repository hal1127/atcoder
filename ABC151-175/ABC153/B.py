H, N = map(int, input().split())
A = [int(x) for x in input().split()]
sum_A = sum(A)

if H <= sum_A:
    print("Yes")
else:
    print("No")