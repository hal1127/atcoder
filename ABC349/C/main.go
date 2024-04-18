package main

import (
	"fmt"
	"math"
	"strings"
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
	var T string
	fmt.Scan(&S)
	fmt.Scan(&T)
	j := 0
	for i := 0; i < len(S); i++ {
		if j == len(T) { break }
		if strings.ToUpper(string(S[i])) == string(T[j]) {
			j++
		}
	}
	if j == len(T) || (j == len(T)-1 && T[len(T)-1] == 'X') {
		fmt.Println("Yes")
	} else {
		fmt.Println(("No"))
	}
}
