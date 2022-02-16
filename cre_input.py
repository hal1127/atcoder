s = ""

N = 2**63

s += str(N) + "\n"

print(s)

with open("input.txt", mode="w") as f:
  f.write(s)