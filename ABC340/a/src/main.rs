fn main() {
    proconio::input! {
        a: i32,
        b: i32,
        c: i32
    }
    let mut n = a;
    while n <= b {
        print!("{}", n);
        if n != b {
            print!(" ");
        }
        n += c;
    }
    print!("\n");
}