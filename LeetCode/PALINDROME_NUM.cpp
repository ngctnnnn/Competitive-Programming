class Solution {
public:
    long long power(int a, int b){
        if (b == 0)
            return 1;
        if (b == 1)
            return a;
        if (b & 1)
            return power(a, b>>1) * power(a, b>>1) * a;
        else
            return power(a, b>>1) * power(a, b>>1);
    }
    int scs(int x){
        int cnt = 0;
        while (x > 0){
            x/=10;
            cnt++;
        }
        return cnt;
    }
    bool isPalindrome(int x) {
        long long temp = x, cmp = 0, num = scs(x);
        if (x < 0) return 0;
        else {
            while (x > 0) {
                cmp += (x % 10) * power(10, --num);
                x/=10;
            }
        }
        return cmp == temp;
    }
};