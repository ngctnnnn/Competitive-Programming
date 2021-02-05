package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
)

func PRIME_SUM(_r io.Reader, _w io.Writer) {
	in := bufio.NewReader(_r)
	out := bufio.NewWriter(_w)
	defer out.Flush()

	var n int32
	fmt.Fscan(in, &n)
	arr := []int64{}
	maxx := int64(-1)

	for i := int32(0); i < n; i++ {
		var x int64
		fmt.Fscan(in, &x)
		arr = append(arr, x)
		if maxx < x {
			maxx = x
		}
	}

	dp := make([]bool, maxx+1)
	for i := int64(1); i <= maxx; i++ {
		dp[i] = true
	}
	dp[1] = false
	for i := int64(2); i*i <= maxx; i++ {
		if dp[i] == true {
			for j := i * i; j <= maxx; j += i {
				dp[j] = false
			}
		}
	}
	sum := int64(0)
	for i := int32(0); i < n; i++ {
		if dp[arr[i]] == true {
			sum += arr[i]
		}
	}
	fmt.Fprint(out, sum)
}

func main() { PRIME_SUM(os.Stdin, os.Stdout) }
