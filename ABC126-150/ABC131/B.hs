main = do
  [n, l] <- map read . words <$> getLine
  print $ solve n l

solve n l = ans
  where
    apples = map (+l) [0..n-1]
    minApple = foldl (\a b -> if abs a > abs b then b else a) (head apples) apples
    ans = sum apples - minApple