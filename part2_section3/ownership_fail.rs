fn main() {
    let s1 = String::from("hello");
    let s2 = s1;              // ownership MOVES from s1 to s2
    println!("{}", s1);       // ERROR: s1 no longer owns the data
}
