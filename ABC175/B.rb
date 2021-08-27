N = gets.to_i
L = gets.split(" ").map(&:to_i)

cnt = 0

L.combination(3) do |a, b, c|
  tri = [a, b, c]
  if ((tri.length - tri.uniq.length) > 0)
    next
  end
  long = tri.max
  lng_idx = tri.index(long)

  tri.delete_at(lng_idx)

  if (long < tri[0] + tri[1])
    cnt += 1
  end
end

puts cnt