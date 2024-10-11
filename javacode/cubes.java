package javacode;
import java.util.Scanner;

public class cubes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int i=1,sum=0,r=0,c=0;

        while(true)
        {
            sum = sum+i;
            r=r+sum;
            i++;
            if(r<=t)
            c++;
            else
            break;
        }
        
        System.out.println(c);
    }
}
