n, x = gets.split.map(&:to_i)
m = n.times.map{gets.to_i}

x -= m.sum

cnt = n + x / m.min

puts cnt
