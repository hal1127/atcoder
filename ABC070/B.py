a, b, c, d = map(int, input().split())

if a < c:
    st = c
else:
    st = a

if b < d:
    ed = b
else:
    ed = d

if st < ed:
    print(ed-st)
else:
    print(0)