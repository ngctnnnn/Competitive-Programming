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

	var s byte
	fmt.Fscan(in, &s)
	set := make(map[byte]int)
	for i := 0; i < len(s); i++ {
		if val, ok := set[i]; ok {
			set[s[i]]++
		} else {
			set[s[i]] = 0
		}
	}
	print(set)
}

func main() { SUMDIFFER(os.Stdin, os.Stdout) }
