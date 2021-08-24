T, A, B, C, D = gets.split.map(&:to_i)

if T >= A + C
  puts B + D
elsif T >= C
  puts D
elsif T >= A
  puts B
else
  puts 0
end