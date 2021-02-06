package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
)

func GCD(a, b int64) int64 {
	if b == 0 {
		return a
	} else {
		return GCD(b, a%b)
	}
}

func B(_r io.Reader, _w io.Writer) {
	in := bufio.NewReader(_r)
	out := bufio.NewWriter(_w)
	defer out.Flush()

	var n int64
	fmt.Fscan(in, &n)
	var a [100009]int64
	for i := int64(0); i < n; i++ {
		fmt.Fscan(in, &a[i])
	}
	ans := a[0]
	for i := int64(1); i < n; i++ {
		ans = GCD(ans, a[i])
	}
	fmt.Fprint(out, ans)
}

func main() { B(os.Stdin, os.Stdout) }
