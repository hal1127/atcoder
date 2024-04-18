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

func sum(a []int) int {
	var ret int
	for i := 0; i < len(a); i++ {
		ret += a[i]
	}
	return ret
}

func main() {
	var N int
	fmt.Scan(&N)
	var A []int
	for i := 0; i < N-1; i++ {
		var a int
		fmt.Scan(&a)
		A = append(A, a)
	}
	fmt.Println(-sum(A))
}
