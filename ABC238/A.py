n = int(input())

if n > 4:
  print("Yes")
else:
  print("Yes" if 2**n > n*n else "No")