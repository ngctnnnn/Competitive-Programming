class Solution {
public:
    int bs(vector<int> a, int l, int r, int x){
        if (r >= l) {
            int mid = (l + r)>>1;
            if (a[mid] == x && (mid == 0 || mid == r - 1 || a[mid - 1] != x))
                return mid;
            else if (x < a[mid])
                return bs(a, 0, mid - 1, x);
            else
                return bs(a, mid + 1, r, x);
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> fail{-1, -1};
        if (nums.size() == 0)
            return fail;
        int pos = bs(nums, 0, nums.size(), target);
        vector<int> ans{pos};
        nums.push_back(-99999);
        if (pos == -1)
            return fail;
        else {
            if (nums[pos + 1] != target) {
                ans.push_back(pos);
                return ans;
            }
            else {
                int i = pos;
                while (nums[i + 1] == target && i + 1 < nums.size())
                    ++i;
                ans.push_back(i);
            }
        }
        return ans;
    }
};