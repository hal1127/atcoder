A, B, C, K = gets.split.map(&:to_i)

remain = K
cnt = 0
ans = 0

cnt = [A, remain].min
ans = cnt
remain -= [A, remain].min
if remain === 0
  puts ans
  return
end

cnt = [B, remain].min
remain -= [B, remain].min
if remain === 0
  puts ans
  return
end

cnt = [C, remain].min
ans -= [C, remain].min
remain -= [C, remain].min
if remain === 0
  puts ans
  return
end

