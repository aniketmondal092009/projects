use std::io;

fn main() {
    println!("Enter a number");

    let mut input = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to take input");

    let n: i32 = input.trim().parse().expect("Not a number");

    println!("Number is: {}", n);

    let mut totalfactors = 0;

    for i in 1..n {
        if n%i == 0 {
            totalfactors += 1;
        }
    }

    if totalfactors == 2 {
        println!("prime number");
    } else {
        println!("not a prime number");
    }
}

