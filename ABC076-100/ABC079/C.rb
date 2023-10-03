N = gets.chomp.split("")

op = []
(2**3).times do
  op.push([""]*3)
end

(2**3).times do |b|
  3.times do |d|
    if b[d] === 1
      op[b][d] = "+"
    else
      op[b][d] = "-"
    end
  end
end

op.count.times do |i|
  fml = N[0] + op[i][0] + N[1] + op[i][1] + N[2] + op[i][2] + N[3]
  if eval(fml) === 7
    puts fml+"=7"
    return
  end
end
