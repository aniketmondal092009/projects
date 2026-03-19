use std::env;
use std::io::{Write, stdin, stdout};
use std::process::Command;
use std::path::Path;

fn usage() {
    println!("rustshell");
    println!("v1.0");
    println!("");
    println!("");
    println!("USAGE:");
    println!("    help: for more information try this ");
    println!("    exit: to exit the rustshell ");

    println!("");
    println!("type in command as you do normally");
    println!("in other shells like bash, zsh or fish");
    println!("they work normally :>");
    println!("");

}

fn main() {
    loop {
        print!("> ");
        let _ = stdout().flush();

        let mut input = String::new();
        stdin().read_line(&mut input).unwrap();

        let mut parts = input.trim().split_whitespace();
        let command = parts.next().unwrap();
        let args = parts;

        match command {
            "cd" => {
                // default to '/' sa the new directory 
                // if one was not provided
                let newdir = args.peekable().peek().map_or("/", |x| *x);

                let root = Path::new(newdir);

                if let Err(e) = env::set_current_dir(&root) {
                    eprintln!("{}", e);
                }

                
            },
            "exit" => return,
            "help" => {
                usage();
            },
            command => {
                let child = Command::new(command)
                    .args(args)
                    .spawn();

                // handle malformed user input
                match child {
                    Ok(mut child) => {
                        let _ = child.wait();
                    },
                    Err(e) => eprintln!("{}", e),
                }
            },
        }
    }
}
