// Rust: dynamic allocation showing ownership and borrowing
fn sum_vector(data: &Vec<i64>) -> i64 {   // borrows the vector (does not take ownership)
    let mut total: i64 = 0;
    for value in data {
        total += value;
    }
    total
}

fn main() {
    // Allocate a large vector on the heap.
    let numbers: Vec<i64> = (1..=1_000_000).collect();
    println!("Rust: allocated a vector of {} integers", numbers.len());

    // Borrow the vector; ownership stays with `numbers`.
    let total = sum_vector(&numbers);
    println!("Rust: sum = {}", total);

    // `numbers` is still usable here because it was only borrowed.
    println!("Rust: first element is still accessible = {}", numbers[0]);

    // When `numbers` goes out of scope at the end of main, Rust
    // automatically frees the heap memory. No manual free, no garbage collector.
    println!("Rust: memory is released automatically when the owner goes out of scope");
}
