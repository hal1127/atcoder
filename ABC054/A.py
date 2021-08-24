tmp = list(map(int, input().split()))

for i in range(2):
    if tmp[i] == 1:
        tmp[i] = 14

A, B = tmp

if A > B:
    print("Alice")
elif A == B:
    print("Draw")
else:
    print("Bob")