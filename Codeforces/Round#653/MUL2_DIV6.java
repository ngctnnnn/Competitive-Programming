import java.util.*;

public class MUL2_DIV6 {
    public long solve(long n){
        if (n == 1)
            return 0;
        while (n != 1) {
            if (n < 6) 
                if (n % 3 != 0)
                    return -1;
                else 
                    

        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            t-= 1;
            long n = sc.nextLong();
            System.out.println(solve(n));
        }
    }
}