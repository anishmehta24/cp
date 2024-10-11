package javacode;
import java.util.Scanner;

public class spellcheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++)
         {
            int l = sc.nextInt();
            String s = sc.next();
            int temp = -1, c = 0;
            if (l == 5) {
                int ch1 = (int)s.charAt(0);
                int ch2 = (int)s.charAt(1);
                int ch3 = (int)s.charAt(2);
                int ch4 = (int)s.charAt(3);
                int ch5 = (int)s.charAt(4);
                if ((ch1 + ch2 + ch3 + ch4 + ch5) == 529)
                 {
                    for (int j = 0; j < l; j++)
                     {
                        char ch = s.charAt(j);
                        if (ch == 'T') {
                            temp = j;
                        }
                    }
                    if (temp != -1)
                     {
                        for (int j = 0; j < temp; j++) {
                            char ch = s.charAt(j);
                            if (Character.isLowerCase((ch))) {
                                if (ch == 'm' || ch == 'u' || ch == 'i' || ch == 'r')
                                    c++;
                            }
                        }
                        for (int j = temp + 1; j < l; j++) {
                            char ch = s.charAt(j);
                            if (Character.isLowerCase((ch))) {
                                if (ch == 'm' || ch == 'u' || ch == 'i' || ch == 'r')
                                    c++;
                            }
                        }
                        if (c == (l - 1))
                            System.out.println("YES");
                        else
                            System.out.println("NO");
                    }
                    else
                    System.out.println("NO");

                } else
                    System.out.println("NO");
            } else
                System.out.println("NO");

        }

    }
}
