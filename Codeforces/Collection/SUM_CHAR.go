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

	maps := make([]byte, 0, len(s))
	for m := range maps {
		maps = append(maps, m)
	}
	sort.Strings(maps)
	for _, m := range maps {
		fmt.Println(a[m])
	}

}

func main() { SUMCHAR(os.Stdin, os.Stdout) }
