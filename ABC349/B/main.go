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
	var S string
	fmt.Scan(&S)
	cnt := map[rune]int{}

	for _, r := range []rune(S) {
		cnt[r]++
	}

	m := map[int][]rune{}

	for k, v := range cnt {
		m[v] = append(m[v], k)
	}

	for _, v := range m {
		if len(v) != 2 && len(v) != 0 {
			fmt.Println("No")
			return
		}
	}
	fmt.Println("Yes")
}
