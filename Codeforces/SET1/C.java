import java.util.*;

public class C {

    public static boolean isPalindrome(string str){
        for (int i = 0; i < str.length(); i+=1){
            if (str[i] != str[str.length() - i - 1])
                return false;
        }
        return true;
    }

    public static void main(String[] args){
        int t;
        Scanner s = new Scanner(System.in);
        t = s.nextInt();
        int cnt = 0;
        while (true){
            if (t == 0)
                break;
            t-=1;
            String str;
            str = s.nextLine();
            if (isPalindrome(str) == true)  
                cnt+=1;
        }
        System.out.println(cnt);
    }
}