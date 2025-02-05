package javacode;
import java.util.*;

public class tvset {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        aays.sort(a);
        int sum=0;
       for(int i=0;i<m;i++)
       {
        if(a[i]<0){
            a[i]=a[i]*-1;
            sum+=a[i];
        }
       
       }
        System.out.println(sum);


    }
}
