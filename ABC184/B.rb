n , x = gets.split.map(&:to_i)
s = gets.chomp

s.split('').each do |c|
  if c === "o"
    x += 1
  elsif c === "x" && x > 0
    x -= 1
  end
end

puts x