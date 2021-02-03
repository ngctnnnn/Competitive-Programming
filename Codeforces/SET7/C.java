import java.util.*;

public class C {

    public static void fibo(long dp[], int n){
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        for (int i = 3; i <= n; i += 1)
            dp[i] = dp[i - 1] + dp[i - 2];
    }

    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        if (n == 1)
            System.out.println(1 +  " " + 0);
        else {
            long [] dp = new long [n + 1];
            fibo(dp, n);
            System.out.println(dp[n - 2] + " " + dp[n - 1]);
        }
    }
}