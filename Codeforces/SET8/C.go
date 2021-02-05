package main 

import (
	"bufio"
	"fmt"
	"io"
	"os"
)


func C(_r io.Reader, _w io.Writer) {
	in := bufio.NewReader(_r)
	out := bufio.NewWriter(_w)
	defer out.Flush()

	var n int32
	fmt.Fscan(in, &n)
		
} 

func main() { C(os.Stdin, os.Stdout) }