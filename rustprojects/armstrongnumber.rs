
use std::io;

fn isarmstrong(n: i32) -> bool {
    let mut counter = 0;
    let mut temp = n;
    while temp != 0 {
        counter += 1;
        temp = temp/10;
    }

    let mut sum = 0;
    temp = n;
    while temp != 0 {
        let d = temp%10;
        sum += d.pow(counter);
        temp = temp / 10;
    }

    return sum == n;
}

fn main() {
    println!("Enter a number");

    let mut input = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("failed to take input");

    let n: i32 = input.trim().parse().expect("not a number");

    if isarmstrong(n) {
        println!("armstrong number");
    } else {
        println!("not armstrong number");
    }
}

