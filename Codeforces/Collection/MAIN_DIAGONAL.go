package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
)

func MAIN_DIAGONAL(_r io.Reader, _w io.Writer) {
	in := bufio.NewReader(_r)
	out := bufio.NewWriter(_w)
	defer out.Flush()

	var n int32
	fmt.Fscan(in, &n)

	arr := [1e3 + 9][1e3 + 9]int64{}

	for i := int32(0); i < n; i++ {
		for j := int32(0); j < n; j++ {
			arr[i][j] = 0
		}
	}

	for i := int32(0); i < n; i++ {
		for j := int32(0); j < n; j++ {
			var x int64
			fmt.Fscan(in, &x)
			arr[i][j] = x
		}
	}
	sum := int64(0)
	for i := int32(0); i < n; i++ {
		sum += arr[i][i]
	}
	fmt.Fprint(out, sum)
}

func main() { MAIN_DIAGONAL(os.Stdin, os.Stdout) }
