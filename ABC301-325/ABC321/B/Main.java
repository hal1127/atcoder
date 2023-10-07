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
        int X = cin.nextInt();
        int[] A = new int[N-1];
        for (int i = 0; i < N-1; i++) {
            A[i] = cin.nextInt();
        }
        cin.close();

        final int MAX = Arrays.stream(A).max().getAsInt();
        final int MIN = Arrays.stream(A).min().getAsInt();

        int sum = Arrays.stream(A).sum();

        // 最後のラウンドを行わなくても目標の点数をすでに取れている場合
        if ((sum - MAX) >= X) {
            System.out.println(0);
            return;
        }

        if (N > 3) {
            sum -= MAX + MIN;
            int ans = X - sum;
            if (MIN <= ans && ans <= MAX) {
                System.out.println(ans);
            } else {
                System.out.println(-1);
            }
        } else {
            int ans = X;
            if (0 <= ans && ans <= 100 && MIN <= ans && ans <= MAX) {
                System.out.println(ans);
            } else {
                System.out.println(-1);
            }
        }
    }
}