import java.util.*;

public class Main {
  final int H = 4;
  final int W = 4;

  public static void main (String[] args)
  {
    new Main().run();
  }

  boolean is_in_grid(int y, int x) {
    return 0 <= y && y < H && 0 <= x && x < W;
  }

  void view_array(int[][] m)
  {
    for (int i = 0; i < m.length; i++) {
      for (int j = 0; j < m[0].length; j++) {
        System.out.print(m[i][j]);
      }
      System.out.println("");
    }
  }

  int sum_matrix(int[][] m)
  {
    int sum = 0;
    for (int i = 0; i < 4; i++) {
      sum += Arrays.stream(m[i]).sum();
    }

    return sum;
  }

  int max_matrix(int[][] m)
  {
    int max = 0;
    for (int i = 0; i < 4; i++) {
      max = Integer.max(max, Arrays.stream(m[i]).max().getAsInt());
    }

    return max;
  }

  void fit_polyomino(int[][] grid, int[][] m, int offset_x, int offset_y)
  {
    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        if (is_in_grid(i + offset_y, j + offset_x)) {
          grid[i + offset_y][j + offset_x] += m[i][j];
        }
      }
    }
  }

  void remove_polyomino(int[][] grid, int[][] m, int offset_x, int offset_y)
  {
    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        if (is_in_grid(i + offset_y, j + offset_x)) {
          grid[i + offset_y][j + offset_x] -= m[i][j];
        }
      }
    }
  }

  int[][] rotate_polyomino(int[][] m) {
    int[][] ret = new int[4][4];
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        ret[j][3-i] = m[i][j];
      }
    }

    return ret;
  }

  boolean solve_puzzle(int i, int[][] grid, int[][][] P, int[] S)
  {
    int sum = 0;
    for (int j = 0; j < i+1; j++) sum += S[j];

    for (int rotate = 0; rotate < 4; rotate++) {
      for (int offset_y = -3; offset_y < 4; offset_y++) {
        for (int offset_x = -3; offset_x < 4; offset_x++) {
            fit_polyomino(grid, P[i], offset_x, offset_y);
            if (i == 2) {
              if (sum_matrix(grid) == sum && max_matrix(grid) == 1) {
                return true;
              }
            } else if (sum_matrix(grid) == sum && max_matrix(grid) == 1 && solve_puzzle(i+1, grid, P, S)) {
              return true;
            }

            remove_polyomino(grid, P[i], offset_x, offset_y);
          }
        }
      P[i] = rotate_polyomino(P[i]);
    }

    return false;
  }

  void run ()
  {
    Scanner cin = new Scanner(System.in);
    int[][][] P = new int[3][4][4];
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < H; j++) {
        String line = cin.next();
        for (int k = 0; k < W; k++) {
          P[i][j][k] = line.charAt(k) == '#' ? 1 : 0;
        }
      }
    }
    cin.close();

    int[] S = new int[3];
    for (int i = 0; i < 3; i++) {
      S[i] = sum_matrix(P[i]);
    }

    if (Arrays.stream(S).sum() != 16) {
      System.out.println("No");
      return;
    }

    int[][] grid = new int[H][W];
    System.out.println(solve_puzzle(0, grid, P, S) ? "Yes" : "No");
  }
}