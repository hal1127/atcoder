{-# OPTIONS_GHC -Wno-incomplete-patterns #-}
main = do
  s <- getLine
  putStrLn $ solve s

solve [a, b, c, d] = do
  if a == b || b == c || c == d then
    "Bad"
  else
    "Good"
