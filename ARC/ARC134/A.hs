main = do
  [n, l, w] <- map (read :: String -> Int) . words <$> getLine
  a <- map (read :: String -> Int) .words <$> getLine
  print $ solve l w a 0 0
  -- print $ test l w a 0 0

solve l w a cnt cur
  | cur > l = cnt
  | length a == 0 = solve l w a (cnt + 1) (cur + w + 1)
  | head a <= cur = solve l w (tail a) cnt (head a + w + 1)
  | otherwise = solve l w a (cnt + 1) (cur + w + 1)
