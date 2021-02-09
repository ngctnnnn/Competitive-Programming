import java.util.*;

public class A {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        long a = s.nextLong();
        long b = s.nextLong();
        if (a > b)
            System.out.println(1);
        else 
            System.out.println(0);
    }
}