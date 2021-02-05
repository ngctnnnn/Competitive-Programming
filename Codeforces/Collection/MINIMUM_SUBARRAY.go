package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
)

func MNMSAR(_r io.Reader, _w io.Writer) {
	in := bufio.NewReader(_r)
	out := bufio.NewWriter(_w)
	defer out.Flush()

	var n int
	fmt.Fscan(in, &n)
	arr := []int64{}
	for i := 0; i < n; i++ {
		var x int64
		fmt.Fscan(in, &x)
		arr = append(arr, x)
	}
	i, l, r, maxx := 0, -1, -1, -1
	for i < n-1 {
		if arr[i] == arr[i+1] {
			j, cnt := i, 0
			for j < n-1 && arr[j] == arr[j+1] {
				cnt++
				j++
			}
			if maxx < cnt {
				maxx = cnt
				l, r = i, j
			}
			i = j + 1
		}
		i++
	}
	fmt.Fprint(out, l+1, r+1)
}

func main() { MNMSAR(os.Stdin, os.Stdout) }
