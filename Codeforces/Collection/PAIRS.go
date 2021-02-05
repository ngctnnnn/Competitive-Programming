package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
)

func PAIRS(_r io.Reader, _w io.Writer) {
	in := bufio.NewReader(_r)
	out := bufio.NewWriter(_w)
	defer out.Flush()

	var n int64
	fmt.Fscan(in, &n)

	even, odd := int64(0), int64(0)
	for n > 0 {
		var x int64
		fmt.Fscan(in, &x)
		if x%2 == 1 {
			odd += int64(x / int64(2))
		} else {
			even += int64(x / int64(2))
		}
		n -= 1
	}
	fmt.Fprint(out, odd+even)
}

func main() { PAIRS(os.Stdin, os.Stdout) }
