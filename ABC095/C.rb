a, b, c, x, y = gets.split.map(&:to_i)

price1 = a * x + b * y

price2 = (c * 2) * [x, y].min

price2 += x > y ? (x-y) * a : (y-x) * b

price3 = (c * 2) * [x, y].max

puts [price1, price2, price3].min