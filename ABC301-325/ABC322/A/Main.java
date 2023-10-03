import java.util.*;

public class Main {
  public static void main (String[] args)
  {
    new Main().run();
  }

  void run ()
  {
    Scanner cin = new Scanner(System.in);
    int N = cin.nextInt();
    String S = cin.next();
    cin.close();

    for (int i = 0; i < N-2; i++)
      if (S.substring(i, i+3).equals("ABC")) {
        System.out.println(i+1);
        return;
      }

    System.out.println(-1);

  }
}