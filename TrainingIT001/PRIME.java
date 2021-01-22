import java.util.Scanner;

public class PRIME {
    static boolean prime(int x){
        if (x == 2 || x == 3){ 
            return true;
        }
        if (x < 2 || x % 2 == 0){ 
            return false;
        }
        for (int i = 3; i*i <= x; i += 2){ 
            if (x % i == 0) { 
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args){
        int x;
        Scanner s = new Scanner(System.in);
        x = s.nextInt();
        if (prime(x) == true){ 
            System.out.println("True");
        }
        else {  
            System.out.println("Ncc");
        }
    }
}