package javacode;
 import java.util.Scanner;
public class Boy {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String word=sc.next();
        int l=word.length();
        int c=l;char ch1=' ';
        for (int i=0;i<l;i++)
        {
             char ch=word.charAt(i);
             if(ch1==ch)
             {
                continue;
             }
            for(int j=l-1;j>i;j--)
            {
                 char temp = word.charAt(j);
                 if(temp==ch)
                 {
                     c--;
                     ch1=temp;
                 }                   
            }
        }
        System.out.println(c);
        if(c%2==0)
        System.out.println("CHAT WITH HER!");
        else
        System.out.println("IGNORE HIM!");

    }
}
