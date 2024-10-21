import java.util.Scanner;
import java.util.Arrays;

public class B_Forming_Triangles
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int tc=0;tc<t;tc++)
        {
            int n = sc.nextInt();
            int a[] = new int[n];
            for(int i=0;i<n;i++)
            {
                a[i]=sc.nextInt();
                a[i]=(int) Math.pow(2,a[i]);
            }
            //System.out.println(a[2] + " " + a[]);
            System.out.println(answer(n, a));
           
        }
    }

    static int getIndex(int[] arr, int s, int e, int value) {
        while(s <= e) {
            int mid = s + (e-s)/2;
            if(arr[mid] < value) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return s;
    }

    public static int answer(int n, int[] a){
        Arrays.sort(a);
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i +1; j < n; j++) {
                int value = a[i] + a[j];
                //System.out.println(a[i] + " " + a[j]);
                
                int soln = (getIndex(a, j+1, n-1, value) - (j+1));
                soln = (soln - (j+1));
                if(soln > 0) ans += soln;
            }
        }
        return ans;
    

    }
}