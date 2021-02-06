package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
)

func E(_r io.Reader, _w io.Writer) {
	in := bufio.NewReader(_r)
	out := bufio.NewWriter(_w)
	defer out.Flush()

	var k int64
	fmt.Fscan(in, &k)
	if k%100000 == 0 {
		fmt.Fprint(out, 0)
	} else {
		fmt.Fprint(out, (k/100000+1)*100000-k)
	}
}

func main() { E(os.Stdin, os.Stdout) }
