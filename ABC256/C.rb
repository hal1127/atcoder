INF = 2*10**9
INFL = 9*10**8
MOD = 10**9+7

hw = gets.split.map(&:to_i)
$h = hw[0..2]
$w = hw[3..6]
$ans = 0
def dfs(rc, numpla)
  r = rc / 3; c = rc % 3
  if r == 3
    $ans += 1
    return :finish
  end
  # r\c | 0 1 2
  # ----+-------
  # 0   | 2 1 2
  # 1   | 2 5 6
  # 2   |
  # rが2のときはw[c]r=0とr=1の数字から求められる
  if r == 2
    x = $w[c] - numpla[0][c] - numpla[1][c]
    if x <= 0
      return
    end
    numpla[r][c] = x
    dfs(rc + 1, numpla)
  elsif c == 2
    x = $h[r] - numpla[r][0] - numpla[r][1]
    if x <= 0
      return
    end
    numpla[r][c] = x
    dfs(rc + 1, numpla)
  else
    for n in 1..30
      numpla[r][c] = n
      dfs(rc + 1, numpla)
    end
  end
end

if $h.sum != $w.sum
  p 0
else
  dfs(0, Array.new(3) { Array.new(3, 0) })
  p $ans
end
