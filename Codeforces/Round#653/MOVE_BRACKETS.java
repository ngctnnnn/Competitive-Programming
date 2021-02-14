import java.util.*;

//1374C
public class MOVE_BRACKETS { 

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            t-=1;
            int n = sc.nextInt();
            sc.nextLine();
            String str = sc.nextLine();
            char []c = str.toCharArray();
            Stack<Character> st = new Stack<Character>();
            for (char ch : c) {
                if (st.empty() == true)
                    st.push(ch);
                else {
                    if (st.peek() == '(' && ch == ')')
                        st.pop();
                    else 
                        st.push(ch);
                }
            }
            System.out.println(st.size()/2);
        }
    }
}