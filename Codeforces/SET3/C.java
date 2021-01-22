import java.util.Scanner;
import java.util.Arrays;

public class C {
    
    public static void main(String[] args) {
        long n;
        Scanner s = new Scanner(System.in);
        n = s.nextLong();

        long cnt = 0, odd = 0;
        for (int i = 0; i < n; i += 1){
            int x;
            x = s.nextInt();
            if (x % 2 == 0){
                cnt += x/2;
            }
            else {
                cnt += x/2;
                odd += 1;
            }
        }
        System.out.println(cnt + (odd / 2));

    }
}