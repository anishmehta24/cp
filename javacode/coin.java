package javacode;
import java.util.Scanner;

public class coin {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int c=0;
        for(int i=n;i>0;)
        {
            if(i>=100)
            {
                c=c+i/100;
                i=i%100;
            }
            if(i>=20&&i<100)
            {
                c=c+i/20;
                i=i%20;
            }
            if(i>=10&&i<20)
            {
                c=c+i/10;
                i=i%10;
            }
            if(i>=5&&i<10)
            {
                c=c+i/5;
                i=i%5;
            }
            if(i>=1&&i<5)
            {
                c=c+i;
                i=0;
            }
        }
        System.out.println(c);
    }
}
