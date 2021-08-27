X, Y = gets.split.map(&:to_i)

x = X
y = Y

tmp = x / 3
x %= 3
y -= tmp

tmp = y / 3
y %= 3
x -= tmp

if x === 0 && y === 0
  puts "Yes"
  return
end

x = X
y = Y

tmp = y / 3
y %= 3
x -= tmp

tmp = x / 3
x %= 3
y -= tmp

if x === 0 && y === 0
  puts "Yes"
else
  puts "No"
end