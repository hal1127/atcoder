a, b = gets.chomp.split
ans = ["D", "", "H"]

a = a === "H" ? 1 : -1
b = b === "H" ? 1 : -1

puts ans[a*b+1]
