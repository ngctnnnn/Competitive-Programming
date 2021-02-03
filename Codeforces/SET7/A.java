import java.util.*;
import java.lang.Math;

public class A {
    public static void main(String[] args) {
        int n, m, cnt = 0;
        Scanner s = new Scanner(System.in);
        n = s.nextInt();
        m = s.nextInt();

        for (int i = 0; i < n; i += 1) 
            for (int j = 0; j < m; j += 1){
                long x = s.nextLong();
                if ((long)Math.sqrt(x) * (long)Math.sqrt(x) ==  x){ 
                    cnt += 1;
                }
            }
        System.out.println(cnt);
    }
}