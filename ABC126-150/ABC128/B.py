N = int(input())
arr = [[0, 0, 0]] * N

for i in range(N):
    arr[i] = input().split()
    arr[i][1] = int(arr[i][1])
    arr[i].append(i + 1)

ans = sorted(arr, key = lambda a: (a[0], -1 * a[1]))

for i in range(N):
    print(ans[i][2])