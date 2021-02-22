class Solution {
public:
    int xorOperation(int n, int start) {
        int sum = start;
        while (--n){ 
            start+=2;
            sum ^= start;
        }
        return sum;
    }
};