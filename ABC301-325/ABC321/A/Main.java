import java.util.*;

public class Main {
    public static void main (String[] args)
    {
        new Main().run();
    }

    void run ()
    {
        Scanner cin = new Scanner(System.in);
        String N = cin.next();
        cin.close();

        for (int i = 0; i < N.length()-1; i++) {
            if (N.charAt(i) <= N.charAt(i+1)) {
                System.out.println("No");
                return;
            }
        }

        System.out.println("Yes");
    }
}