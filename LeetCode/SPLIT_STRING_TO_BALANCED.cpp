class Solution {
public int balancedStringSplit(String s) {
        int ans = 0;
        char []c = s.toCharArray();
        int i = 0;
        while (i + 1 < s.length()) {
            int j = i + 1;
            
            while (c[j] == c[i] && j + 1< s.length())
                j += 1;
            i = j + 1;
            if (j != s.length() - 1)
                ans += 1;
        }
        return ans;
    }
}