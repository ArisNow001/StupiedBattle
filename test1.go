package main;
import (
	"fmt"
	"time"
);

func pi(iterations int64) float64 {
	var dop int64 = 1;
	total := 0.0;
	for range iterations {
		total += 1.0 / float64(dop);
		// if you think those manipulations doesn't make any sense, arisnow thinks ohterwise (fuck off Griesson)
		dop += 2;
		total -= 1.0 / float64(dop);
		dop += 2;
	}
	return total * 4;
}

func main() {
	start := time.Now();
	fmt.Println(pi(100_000_000_000))
	endTime := time.Since(start);
	fmt.Println("time required: ", endTime);
} // By Griesson
