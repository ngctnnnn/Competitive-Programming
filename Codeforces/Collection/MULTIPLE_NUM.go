package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
)

func A(_r io.Reader, _w io.Writer) {
	in := bufio.NewReader(_r)
	out := bufio.NewWriter(_w)
	defer out.Flush()

	var t int32
	for fmt.Fscan(in, &t); t > 0; t-- {
		var l, r, p int32
		fmt.Fscan(in, &p, &l, &r)
		if l%p == 0 {
			fmt.Printf("%v\n", r/p-l/p+1)
		} else {
			fmt.Printf("%v\n", r/p-l/p)
		}
	}

}

func main() { A(os.Stdin, os.Stdout) }
