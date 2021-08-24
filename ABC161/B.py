N, M = map(int, input().split())
A = [int(x) for x in input().split()]
A.sort(reverse=True)
sum_A = sum(A)

ans = "Yes"
for i in range(M):
    if A[i] < sum_A / (4 * M):
        ans = "No"
        break

print(ans)
#print("N = {}, M = {}, A = {}".format(N, M, A))