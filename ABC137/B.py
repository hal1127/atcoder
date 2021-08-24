K, X = map(int, input().split())
start = X - (K - 1)
end = X + (K - 1)
for i in range(start, end+1):
    print("%d " % i, end="")
print()