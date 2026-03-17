use std::time::Instant;

const LEN: usize = 1_000_000_001;

fn heap_stuff() -> i64 {
    let mut arr: Vec<i32> = Vec::with_capacity(LEN);

    for i in 0..LEN {
        arr.push(i as i32);
    }

    let mut result: i64 = 0;
    for &i in &arr {
        result += i as i64;
    }

    result
}

fn main() {
    let start = Instant::now();
    let result = heap_stuff();
    let elapsed = start.elapsed();

    println!("Result: {}", result);
    println!("Time required: {:?}", elapsed);
} // ChatGpt 