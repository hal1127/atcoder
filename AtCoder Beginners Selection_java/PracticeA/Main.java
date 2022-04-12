import java.util.*;

public class Main {
  public static void main (String[] args)
  {
    new Main().run();
  }

  void run ()
  {
    Scanner cin = new Scanner(System.in);
    int a = cin.nextInt();
    int b = cin.nextInt();
    int c = cin.nextInt();
    String s = cin.next();

    System.out.printf("%d %s\n", a+b+c, s);
  }
}