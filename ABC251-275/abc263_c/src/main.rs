use proconio::input;

fn rec(n: i32, start: i32, end: i32, combs: &mut Vec<Vec<i32>>, mut comb: Vec<i32>) {
    if n == 0 {
        combs.push(comb);
        return;
    }
    for i in start..end {
        comb.push(i);
        // combを引数に渡すと無効化されてしまうので，コピーした値を渡す
        rec(n-1, i+1, end, combs, comb.clone());
        comb.pop();
    }
}

fn main() {
    input!{
        n: i32,
        m: i32,
    }

    let mut combs: Vec<Vec<i32>> = Vec::new();
    let comb: Vec<i32> = Vec::new();
    rec(n, 1, m+1, &mut combs, comb);
    for x in combs {
        for (i, y) in x.iter().enumerate() {
            if i != 0 {
                print!(" ");
            }
            print!("{}", y);
            if i == x.len()-1 {
                println!("");
            }
        }
    }
}
