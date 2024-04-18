package main

import (
  "fmt"
  "strconv"
  "sort"
  "math"
)

func pow(n int, p int) int {
  return int(math.Pow(float64(n), float64(p)))
}

func reverse(s string) string {
  var r []rune = []rune(s)
  for i, j := 0, len(r)-1; i < j; i, j = i+1, j-1 {
    r[i], r[j] = r[j], r[i]
  }
  return string(r)
}

func main() {
  var N int
  fmt.Scan(&N)

  var kaibuns []int
  for i := 1; N >= pow(i, 3); i++ {
    var str string = strconv.Itoa(pow(i, 3))
    var rune_str []rune = []rune(str)

    if str == string(rune_str) {
      num, _ := strconv.Atoi(str)
      kaibuns = append(kaibuns, num)
    }
  }
  sort.Sort(sort.IntSlice(kaibuns))
  fmt.Println(kaibuns[len(kaibuns)-1])
}
