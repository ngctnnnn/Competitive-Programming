package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	s, _ := reader.ReadString('\n')

	ok1, ok2, ok3 := 0, 0, 0
	for i := 0; i < len(s); i++ {
		if 'A' <= s[i] && s[i] <= 'Z' {
			ok1 = ok1 | 1
		} else if 'a' <= s[i] && s[i] <= 'z' {
			ok2 = ok2 | 1
		} else if '0' <= s[i] && s[i] <= '9' {
			ok3 = ok3 | 1
		} else {
			continue
		}
	}

	if ok1 == 1 && ok2 == 1 && ok3 == 1 {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
