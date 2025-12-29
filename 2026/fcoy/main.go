package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	input := bufio.NewScanner(os.Stdin)
	input.Scan()
	inputLine := strings.Split(input.Text(), " ")
	D, _ := strconv.Atoi(inputLine[0])
	F, _ := strconv.Atoi(inputLine[1])

	for F <= D {
		F += 7
	}

	fmt.Println(F - D)
}
