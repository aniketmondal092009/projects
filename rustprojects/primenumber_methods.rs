use std::io;

fn isprime(n: i32) -> bool {
    if n <= 1 {
        return false;
    }

    for i in 2..n {
        if n%i == 0 {
            return false;
        }
    }

    return true;
}

fn main() {
    println!("Enter a number");

    let mut input = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to take input");

    let n: i32 = input.trim().parse().expect("Not a number");

    println!("Number is: {}", n);

    if isprime(n) {
        println!("prime number");
    } else {
        println!("not a prime number");
    }
}

