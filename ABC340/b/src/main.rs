fn main() {
    let mut a: Vec<i32> = Vec::new();
    proconio::input! {
        q: i32
    }
    for _i in 0..q {
        proconio::input! {
            q_n: i32,
            q_x: i32
        }
        if q_n == 1 {
            a.push(q_x);
        } else {
            println!("{}",
                    a.get(a.len() - (q_x as usize)).unwrap());
        }
    }
}
