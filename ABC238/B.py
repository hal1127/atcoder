# 入力
N = int(input())
A = list(map(int, input().split()))

# ピザのカット位置
B = [0]*(N+1)
for i in range(N):
  B[i+1] = B[i] + A[i]
  # B[i+1]が360を超えている場合は、一周して360以内に戻す
  if B[i+1] > 360:
    B[i+1] -= 360

B = sorted(B)
# 計算の都合上、最後に360を追加
B.append(360)

# 最大のピザを取得
ans = 0
for i in range(N+1):
  ans = max(ans, B[i+1]-B[i])

print(ans)