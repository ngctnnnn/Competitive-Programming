import java.util.*;

public class A {

    public static void sieve(boolean prime_sieve[], int x){
        prime_sieve[0] = false;
        prime_sieve[1] = false;
        for (int i = 2; i <= x; i += 1)
            prime_sieve[i] = true;
        for (int i = 2; i * i <= x; i += 1)
            if (prime_sieve[i] == true)
                for (int j = i*i; j <= x; j+=i)
                    prime_sieve[j] = false;
    }

    public static void main(String[] args) { 
        int n;
        Scanner s = new Scanner(System.in);
        n = s.nextInt();

        int a[] = new int [200009];
        int maxx = -99;
        for (int i = 0; i < n; i += 1){
            int x;
            x = s.nextInt();
            a[i] = x;
            maxx = Math.max(maxx, x);
        }
        boolean prime_sieve[] = new boolean [1000009];
        sieve(prime_sieve, maxx);
        long sum = 0;
        for (int i = 0; i < n; i += 1)
            if (prime_sieve[a[i]])
                sum += a[i];
        System.out.println(sum);
    }
}

