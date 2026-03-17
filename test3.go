package main;
import (
	"fmt"
	"time"
)

func primes(iterations int64) int64 {
	var primes []int64;
	var n int64;
	for n = 2; n <= iterations; n++ {
		prime := true;
		for i := 2; int64(i * i) <= n; i++ {
			if n % int64(i) == 0 {prime = false; break}
		}
		if prime {primes = append(primes, n)}
	}

	var total int64 = 0;
	for i, p := range primes {
		total += p;
		primes[i] = 0;
	}
	return total;
}

func main() {
	current := time.Now();
	result := primes(50_000_000);
	timeRequired := time.Since(current);
	fmt.Println("Sum: ", result);
	fmt.Println("Time required: ", timeRequired);
} // By Griesson
