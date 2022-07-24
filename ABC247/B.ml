module SS = Set.Make(String)

let check n st =
  let rec loop i n s =
    if i == List.length st then s
    else if i != n then
      let s = List.fold_right SS.add (List.nth st i) s in
      loop (i + 1) n s
    else loop (i + 1) n s
  in
  not @@ List.for_all (fun x -> SS.mem x (loop 0 n SS.empty)) (List.nth st n)

let ans b =
  if b then "Yes"
  else "No"

let () =
  let n = read_int () in
  let st = List.init n @@ fun _ -> read_line () |> String.split_on_char ' ' in
  let range = List.init n @@ fun x -> x in
  print_endline @@ ans @@ List.for_all (fun i -> check i st) range
