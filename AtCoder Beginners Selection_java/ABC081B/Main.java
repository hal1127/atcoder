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
    Integer n = Integer.parseInt(cin.nextLine());
    List<String> list = Arrays.asList(cin.nextLine().split(" "));
    List<Integer> a = list.stream().map(x -> Integer.parseInt(x)).collect(Collectors.toList());

    Boolean isFinish = false;
    Integer cnt = 0;
    while (!isFinish) {
      for (Integer i = 0; i < n; i++) {
        if (a.get(i) % 2 == 0) {
          a.set(i, a.get(i) / 2);
        } else {
          isFinish = true;
        }
      }
      if (!isFinish) {
        cnt++;
      }
    }
    System.out.println(cnt);
  }
}