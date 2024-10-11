package javacode;
import java.util.Scanner;

public class constructString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        String al[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
        for(int i=0;i<t;i++)
        {
            int n=sc.nextInt();
            int a=sc.nextInt();
            int b=sc.nextInt();
            String s[]= new String[n];
            for(int j=0;j<b;j++)
            s[j]=al[j];
            int k=0;
            for(int j=0;j<n;j++)
            {
                System.out.print(s[k]);
                
                k++;
                if(k==b)
                k=0;
            }
            System.out.println();
        }
    }
}
