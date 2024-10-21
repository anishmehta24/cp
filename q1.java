import java.util.Scanner;

public class q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int tc=0;tc<t;tc++)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.println(b/a);
        }
    }
}
