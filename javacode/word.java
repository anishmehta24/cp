package javacode;
import java.util.Scanner;

public class word {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.next();
        int n = word.length();
        String newWord="";
        char ch = word.charAt(0);
        if(Character.isLowerCase(ch))
            {
                newWord=newWord+(Character.toUpperCase(ch));
            }
        else
        newWord=newWord+ch;   
        for(int i=1;i<n;i++)
        {
            char ch1= word.charAt(i);
            newWord = newWord+ch1;
        }
        System.out.println(newWord);
    }
}
