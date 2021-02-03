import java.util.*;

public class E {
    public static void main (String[] args){
        Scanner s = new Scanner(System.in);
        int x, y, z;
        x = s.nextInt();
        y = s.nextInt();
        z = s.nextInt();
        int [] a = new int[x + y + z + 1];
        for (int i = 1; i <= x; i += 1)
            for (int j = 1; j <= y; j += 1)
                for (int t = 1; t <= z; t += 1)
                    a[i + j + t]+=1;
        int maxx = -1, pos = 0;
        for (int i = 1; i < x + y + z + 1; i += 1){
            if (maxx < a[i]){ 
                maxx = a[i];
                pos = i;
            }
        }
        System.out.println(pos);
    }
}