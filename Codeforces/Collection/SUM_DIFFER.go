package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
)

func SUMDIFFER(_r io.Reader, _w io.Writer) {
	in := bufio.NewReader(_r)
	out := bufio.NewWriter(_w)
	defer out.Flush()

	a := make(map[byte]int)

	var s string
	fmt.Fscan(in, &s)
	for i := range s {
		a[s[i]]++
	}
	fmt.Fprint(out, len(a))
}

func main() { SUMDIFFER(os.Stdin, os.Stdout) }
