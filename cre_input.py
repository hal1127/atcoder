s = ""

N = 100
a = [str(int(1e9))] * N

s += "{}\n".format(N)
s += " ".join(a) + "\n"

print(s)

with open("input.txt", mode="w") as f:
  f.write(s)