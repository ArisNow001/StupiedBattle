package main

import (
	"fmt"
	"time"
)

func main() {
	start := time.Now()

	const LENGTH int64 = 1_000_000_000 
	arr := make([]int32, LENGTH)      

	for i := int64(0); i < LENGTH; i++ {
		arr[i] = int32(i)
	}
	var sum int64
	for _, n := range arr {
		sum += int64(n)
	}

	fmt.Println("sum:", sum)
	fmt.Println("time required:", time.Since(start))
} // ChatGpt 