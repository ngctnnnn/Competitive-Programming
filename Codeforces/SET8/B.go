package main 

import (
	"bufio"
	"fmt"
	"io"
	"os"
)

func B(_r io.Reader, _w io.Writer) {
	in := bufio.NewReader(_r)
	out := bufio.NewWriter(_w)
	defer out.Flush()

	
} 

func main() { B(os.Stdin, os.Stdout) }