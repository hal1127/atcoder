A = list(map(lambda x: int(x), input().split()))

if sum(A) >= 22:
    print('bust')
else:
    print('win')