W, a, b = gets.split.map(&:to_i)

puts b.between?(a, a+W) || (b+W).between?(a, a+W) ? 0 : [(b - (a + W)).abs, ((b + W) - a).abs].min
