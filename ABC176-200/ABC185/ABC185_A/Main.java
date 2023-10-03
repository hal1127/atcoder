import java.util.*;

public class Main{
  public static void main(String[] args) {
    new Main().run();
  }

  public void run() {
    Scanner cin = new Scanner(System.in);
    int N = 4;
    int[] A = new int[N];
    for (int i = 0; i < N; i++) {
      A[i] = cin.nextInt();
    }
    int min = Integer.MAX_VALUE;
    for (int i = 0; i < N; i++) {
      if (min > A[i]) min = A[i];
    }
    System.out.println(min);
    cin.close();
  }
}