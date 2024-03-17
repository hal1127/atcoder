require 'set'

N = gets.to_i
A = gets.split(" ").map(&:to_i)

M = gets.to_i
B = gets.split(" ").map(&:to_i)

L = gets.to_i
C = gets.split(" ").map(&:to_i)

Q = gets.to_i
X = gets.split(" ").map(&:to_i)

S = Set.new
for a in A do
  for b in B do
    for c in C do 
      S.add a+b+c
    end
  end
end

for x in X do
  if S.include? x
    puts "Yes"
  else
    puts "No"
  end
end

