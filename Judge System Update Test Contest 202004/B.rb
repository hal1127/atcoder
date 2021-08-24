N = gets.to_i
xr = []
xb = []
N.times do
  tx, tc = gets.split.map(&:chomp)
  if tc === "R"
    xr.push(tx.to_i)
  else
    xb.push(tx.to_i)
  end
end

xr.sort!
xb.sort!

while !(xr+xb).empty? do
  if !xr.empty?
    puts xr.shift
  else
    puts xb.shift
  end
end