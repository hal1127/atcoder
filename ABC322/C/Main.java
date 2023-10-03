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
    int M = cin.nextInt();
    final int MAX_N = 2 * (int)1e5;
    int[] A = new int[MAX_N];
    int[] B = new int[MAX_N];
    for (int i = 0; i < M; i++) {
      A[i] = cin.nextInt();
      B[-A[i]+N] = -1;
    }
    cin.close();

    for (int i = 0; i < N; i++) {
      if (B[i] == -1) {
        B[i] = 0;
      } else {
        B[i] = B[i-1] + 1;
      }
    }

    for (int i = N-1; i >= 0; i--) {
      System.out.println(B[i]);
    }
  }
}