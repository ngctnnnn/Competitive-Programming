package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
	"sort"
)

func SORT(_r io.Reader, _w io.Writer) {
	in := bufio.NewReader(_r)
	out := bufio.NewWriter(_w)
	defer out.Flush()

	var n, k int64
	fmt.Fscan(in, &n, &k)
	var arr [500009]int64
	for i := int64(0); i < n; i++ {
		fmt.Fscan(in, &arr[i])
	}
	arr = sort.Sort(arr)
	fmt.Fprint(out, arr)
}

func main() { SORT(os.Stdin, os.Stdout) }
