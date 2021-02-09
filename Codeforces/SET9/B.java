import java.util.*;

public class B {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n, x;
        n = s.nextInt();
        x = s.nextInt();
        int []t = new int[n + 1];
        for (int i = 0; i < n; ++i) {
            int tmp;
            tmp = s.nextInt();
            t[i] = tmp;
        }
        int []b = new int[n + 1];
        b[0] = 0;
        int cnt = 0;
        for (int i = 1; i <= n; ++i) {
            b[i] = b[i - 1] + t[i - 1];
            if (b[i] <= x)
                cnt+=1;
        }
        System.out.println(cnt + 1);
    }
}