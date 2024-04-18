package main

import (
	"fmt"
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
}
