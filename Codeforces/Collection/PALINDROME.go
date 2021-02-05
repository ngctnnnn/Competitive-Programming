package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
)

func check(text string) bool {
	n := len(text) - 1
	for i := 0; i <= n; i++ {
		if text[i] != text[n-i] {
			return false
		}
	}
	return true
}

func PALINDROME(_r io.Reader, _w io.Writer) {
	in := bufio.NewReader(_r)
	out := bufio.NewWriter(_w)
	defer out.Flush()

	cnt := int(0)
	var t int
	for fmt.Fscan(in, &t); t > 0; t-- {
		var text string
		fmt.Fscan(in, &text)
		if check(text) == true {
			cnt++
		}
	}
	fmt.Fprint(out, cnt)
}

func main() { PALINDROME(os.Stdin, os.Stdout) }
