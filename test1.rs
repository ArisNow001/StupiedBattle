use std::time::{SystemTime};

fn pi(iterations: i64) -> f64 {
    let mut dop: f64 = 1.;
    let mut result: f64 = 0.;
    for _ in 0..iterations {
        result += 1./dop;
        dop += 2.;
        result -= 1./dop;
        dop += 2.;
    }
    result * 4.
}

fn main() {
    let current = SystemTime::now();
    let pi = pi(100_000_000_000);
    let time_required = SystemTime::now().duration_since(current);
    println!("Pi: {pi}\nTime required: {time_required:?}");
} // By Griesson
