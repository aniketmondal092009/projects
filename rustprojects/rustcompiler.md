why is rust compiler so helpful

memory safety without garbage collection
most languages either risk crashes (c or cpp), or, 
use garbage collectors (java or python)
rust does NOT use "garbage collection"


rust does something different
it uses ownership system
ensures that there is no
null pointer error
dangling pointers
data races


the borrow checker
the famous part of rust:
it enforces rules like 
only one mutable reference at a tume
or many immutable references
known as "BORROW CHECKER"
