package javacode;
import java.util.Scanner;

public class number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
       String s=sc.next();
       int l=s.length();
    //    char last_ch=s.charAt(l-1);
    //    char seclast_ch=s.charAt(l-2);
       String newstr="",newstr1="";
       if(s.charAt(0)=='-')
       {
       for(int i=0;i<l;i++)
       {
           char ch=s.charAt(i);
           if(i!=l-1)
           newstr=newstr+ch;
           if(i!=l-2)
           newstr1=newstr1+ch;
       }
       int num1=Integer.parseInt(newstr);
       int num2=Integer.parseInt(newstr1);

       if(Math.abs(num1)>Math.abs(num2))
       System.out.println(num2);
       else
       System.out.println(num1);
    }
    else
    System.out.println(s);
    }
}
