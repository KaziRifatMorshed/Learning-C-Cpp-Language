fn main() {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("");
    let t: i32 = input.trim().parse().expect("");

    for _ in 0..t {
        std::io::stdin().read_line(&mut input).expect("");
        let (a, b) = scan!(input; "{} {}", i32, i32).expect("Error parsing input");

        if a > b {
            println!("{} {}", b, a);
        } else {
            println!("{} {}", a, b);
        }
    }
}
