package javacode;
import java.util.Scanner;
class word{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a word");
        String word=sc.next();
        int l= word.length();
        int uc=0,lc=0;String newWord="";
        for(int i=0;i<l;i++)
        {
            char ch= word.charAt(i);
            if(Character.isUpperCase(ch)==true)
            uc++;
            else
            lc++;
        }
        if(uc>lc)
        newWord=word.toUpperCase();
        else if(lc>=uc)
        newWord=word.toLowerCase();

        System.out.println(newWord);
    }
}