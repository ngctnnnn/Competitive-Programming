import java.util.Scanner;

public class A {
    static long GCD(long a, long b){
        if (b == 0)
            return a;
        else 
            return GCD(b, a % b);
    }

    public static void main (String [] args) {
        long a, b;
        Scanner s = new Scanner(System.in);
        a = s.nextLong();
        b = s.nextLong();
        System.out.println(GCD(a, b));
    }
}
   