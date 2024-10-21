import java.util.Scanner;

public class makeap {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int k = Math.max(a,Math.max(b,c));
            int m1=0,m2=0,m3=0,m4=0,m5=0,m6=0,s=0;
            if(k==a)
            {
                if((k-b)%c==0)
                {
                    m1++;
                    s=(k-b)/c;
                }
                else if((k-c)%b==0)
                {
                    m2++;
                    s = (k-c)/b;
                }
                
            }
            else if(k==b)
            {
                if((k-a)%c==0)
                {
                    m3++;
                    s=(k-a)/c;
                }
                else if((k-c)%a==0)
                {
                    m4++;
                    s = (k-c)/a;
                }
                
            }
            else
            {
                if((k-b)%a==0)
                {
                    m5++;
                    s = (k-b)/a;
                }
               else if((k-a)%b==0)
               {
                m6++;
                s = (k-a)/b;
               }
            }
            if(m1==1||m3==1)
            {
                c=c*s;
                if((a-b)==(b-c))
                System.out.println("YES");
                else
                System.out.println("NO");
            }
            else if(m2==1||m6==1)
            {
                b=b*s;
                if((a-b)==(b-c))
                System.out.println("YES");
                else
                System.out.println("NO");
            }
            else if(m4==1||m5==1)
            {
                a=a*s;
                if((a-b)==(b-c))
                System.out.println("YES");
                else
                System.out.println("NO");
            }
            else
            System.out.println("NO");
        }
    }
}
