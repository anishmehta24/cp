package javacode;
import java.util.Scanner;

public class boring {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[]= new int[n];
        for(int i =0;i<n;i++)
        {
           a[i] = sc.nextInt();
           
        }
       
        for(int i=0;i<n;i++)
        {
           getCount(a[i]);
        }
        
    }
    //Method to get count 
    public static void getCount(int a)
    {
        int c=0;
        int k=a;
        int d=k%10;
        int m=0;
        
        for(k=a;k>0;k/=10)
        {
            c++;
        }

        for(int j=1;j<d;j++)
        {
            m=m+10;
        }

        if(c==1)
        m=m+1;
        if(c==2)
        m=m+3;
        if(c==3)
        m=m+6;
        if(c==4)
        m=m+10;
        System.out.println(m);
    }

}