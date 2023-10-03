N = gets.to_i

sum = 0
N.times do
  l, r = gets.split.map(&:to_i)
  sum += r - l + 1
end

puts sum