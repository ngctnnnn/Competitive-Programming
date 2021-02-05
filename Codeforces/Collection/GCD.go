package main

import (
	"fmt"
)

func __gcd(a, b int64) int64 {
	if b == 0 {
		return a
	} else {
		return __gcd(b, a%b)
	}
}

func main() {
	var a int64
	var b int64
	fmt.Scanf("%v %v", &a, &b)
	fmt.Println(__gcd(a, b))
}
