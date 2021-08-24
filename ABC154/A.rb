str = gets.split
num = gets.split.map(&:to_i)
U = gets.chomp

pos = str.index(U)

num[pos] -= 1

puts num.join(" ")