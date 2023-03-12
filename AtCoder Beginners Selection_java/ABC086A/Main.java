import java.util.*;
import java.util.stream.Collectors;

public class Main {
  public static void main (String[] args)
  {
    new Main().run();
  }

  void run ()
  {
    Scanner cin = new Scanner(System.in);
    List<String> list = Arrays.asList(cin.nextLine().split(" "));
    List<Integer> list2 = list.stream().map(x -> Integer.parseInt(x)).collect(Collectors.toList());

    if (list2.get(0) * list2.get(1) % 2 == 1) {
      System.out.println("Odd");
    } else {
      System.out.println("Even");
    }
  }
}