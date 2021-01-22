import java.util.*;
public class B {
    public static void main(String[] args){
        int n;
        Scanner s = new Scanner(System.in);
        n = s.nextInt();

        int a[][] = new int[1001][1001];
        for (int i = 0; i < n; i += 1)
            for (int j = 0; j < n; j += 1){
                int x;
                x = s.nextInt();
                a[i][j] = x;
            }
        
        int sum = 0;
        for (int i = 0; i < n; i += 1)
            sum += a[i][i];
        System.out.println(sum);
    }
}