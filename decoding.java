import java.util.Scanner;

public class decoding {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        char a[] = new char[n];

       
        int t=n;int i=0;int k;
        if(t%2==0)
        k=t/2;
        else
        k=(t+1)/2;
       
        int l=k-1,r=k-1;
        a[k-1]=s.charAt(i);
        i=1;
        if(n<=2)
        System.out.println(s);
        else
        {
        while(i<n)
        {
            if(t%2!=0)
            {
                if(i%2!=0)
                a[--l]=s.charAt(i);
                else
                a[++r]=s.charAt(i);
            }
            else
            {
                if(i%2==0)
                a[--l]=s.charAt(i);
                else
                a[++r]=s.charAt(i);
            }
            i++;
        }
        
        for(int j=0;j<n;j++)
        {
            System.out.print(a[j]);
        }
    }
        
    }
}
