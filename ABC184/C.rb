r1, c1 = gets.split.map(&:to_i)
r2, c2 = gets.split.map(&:to_i)

if r1 === r2 && c1 === c2
  puts 0
  return
end

if r1 - c1 === r2 - c2 || r1 + c1 === r2 + c2 ||
    (r1 - r2).abs + (c1 - c2).abs <= 3
  puts 1
  return
end

if ((r1 - c1) - (r2 - c2)).abs <= 3 ||
    ((r1 + c1) - (r2 + c2)).abs <= 3
  puts 2
  return
end

if (r1 - c1)%2 === (r2 + c2)%2 ||
    (r1 + c1)%2 === (r2 - c2)%2
  puts 2
else
  puts 3
end

p r1 - c1
p r2 - c2
