N, M = map(int, input().split())
A = [""] * N
B = [""] * M

for i in range(N):
    A[i] = input()
for i in range(M):
    B[i] = input()

trm = [""] * M

for i in range(N-M+1):
    for j in range(N-M+1):
        trm = [A[k+i][j:j+M] for k in range(M)]
        if B == trm:
            print("Yes")
            break
    else:
        continue
    break
else:
    print("No")