import java.util.Arrays;
import java.util.Scanner;

public class mod {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int t = sc.nextInt();
    for (int tc = 0; tc < t; ++tc) {
      int n = sc.nextInt();
      int[] a = new int[n];
      for (int i = 0; i < a.length; ++i) {
        a[i] = sc.nextInt();
      }

      System.out.println(solve(a) ? "YES" : "NO");
    }

    sc.close();
  }

  static boolean solve(int[] a) {
    int min = Arrays.stream(a).min().getAsInt();

    return Arrays.stream(a).filter(x -> x == min).count() == 1
        || Arrays.stream(a).anyMatch(x -> x % min != 0);
  }
}