N, D = gets.split().map(&:to_i)
P = N.times.map{gets.split().map(&:to_i)}

cnt = 0

P.each do |pos|
  if Math.sqrt((pos[0]**2)+(pos[1]**2)) <= D
    cnt += 1
  end
end

puts cnt