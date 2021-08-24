N, K = map(int, input().split())
H = [int(x) for x in input().split()]

if N < K:
    print(0)
else:
    H.sort(reverse=True)
    print(sum(H[K:]))