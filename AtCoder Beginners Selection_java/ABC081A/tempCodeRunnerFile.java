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
    List<String> s = Arrays.asList(cin.nextLine().split(""));
    List<Integer> list = s.stream().map(x -> Integer.parseInt(x)).collect(Collectors.toList());
    System.out.println(list.stream().reduce((a, b) -> a + b).get());
  }
}