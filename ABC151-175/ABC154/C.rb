N = gets.to_i
A = gets.split.map(&:to_i)

require 'set'

if A === A.to_set.to_a
  puts "YES"
else
  puts "NO"
end