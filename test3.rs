use std::time::SystemTime;

fn primes(iterations: i64) -> i64 {
    let mut primes: Vec<i32> = Vec::new();
    for n in 2..iterations {
        let mut prime = true;
        let mut i = 2;
        while i * i <= n {
            if n % i == 0 {
                prime = false;
                break;
            }
            i += 1;
        }
        if prime {primes.push(n as i32)};
    }
    let mut result: i64 = 0;
    for p in primes {
        result += p as i64;
    }
    result
}

fn main() {
    let current = SystemTime::now();
    let result = primes(50_000_000);
    let time_required = SystemTime::now().duration_since(current);
    println!("Result: {result}\nTime required: {time_required:?}");
} // By Griesson
