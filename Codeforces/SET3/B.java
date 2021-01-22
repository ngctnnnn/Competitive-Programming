import java.util.Scanner;
import java.util.Arrays;

public class B {

    public static void main (String[] args) {
        long n;
        Scanner s = new Scanner(System.in);
        n = s.nextLong();
        long a[] = new long [1000001];
        
        for (int i = 0; i < n; i += 1) {
            long x;
            x = s.nextLong();
            a[i] = x;
        }

        long maxL = -1, maxR = -1, maxLength = -1;
        int i = 0;
        while (i < n - 1){
            if (a[i] == a[i + 1]){
                long cnt = 0;
                int j = i;
                while (a[j] == a[j + 1] && j + 1 < n){
                    cnt+=1;
                    j+=1;
                }
                if (cnt > maxLength){
                    maxLength = cnt;
                    maxL = i + 1;
                    maxR = j + 1;
                }
                i = j;
            }
            i+=1;
        }
        System.out.print(maxL + " " + maxR);
    }  
}