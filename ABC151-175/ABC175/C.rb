X, K, D = gets.split().map(&:to_i)
X = X.abs

straight = [K, X / D].min
K -= straight
X -= straight * D

if (K % 2 == 0)
  puts X
else
  puts (X - D).abs
end
