package javacode;
import java.util.Scanner;

public class magicnumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();
        int c = 0;
        for (int i = 0; i < n.length(); i++) {
            int ch = n.charAt(i) - 48;
            if (ch != 1 && ch != 4) {
                c++;
            }
        }
        if (c > 0)
            System.out.println("NO");
        else
            checkMagic(n);
    }

    public static void checkMagic(String n) 
    {
        if ((n.charAt(0) - 48) != 1) 
        {
            System.out.println("NO");
        } 
        else 
        {
            int j = 0, c = 0, i = 1,m=0;
            while (j < n.length()) 
            {
               
                String s = "1";
              if(i<n.length())
              {  
                while ((n.charAt(i) - 48 != 1)) 
                {
                    
                    int k = n.charAt(i) - 48;
                    String a = "" + k;
                    s = s + a;
                    i++;
                    if(i>=n.length())
                    break;
                }
              }
                if (s.equals("1") || s.equals("14") || s.equals("144")) 
                {
                    j = i;
                   
                    i++;
                } 
                else 
                {
                    c++;
                    System.out.println("NO");
                    break;
                }
            }
            if (c == 0)
                System.out.println("YES");
        }

    }
}
