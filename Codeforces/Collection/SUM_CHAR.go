package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
)

func SUMCHAR(_r io.Reader, _w io.Writer) {
	in := bufio.NewReader(_r)
	out := bufio.NewWriter(_w)
	defer out.Flush()

	a := make(map[byte]int)

	var s string
	fmt.Fscan(in, &s)
	for i := range s {
		a[s[i]]++
	}
	for key, value := range a {
		fmt.Printf("%c %d\n", key, value)
	}
}

func main() { SUMCHAR(os.Stdin, os.Stdout) }
