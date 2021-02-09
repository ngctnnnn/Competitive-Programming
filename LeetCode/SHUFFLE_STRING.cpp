class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<pair<int, char>> rep;
        for (int i = 0; i < s.length(); ++i) {
            rep.push_back({indices[i], s[i]});
        }
        sort(rep.begin(), rep.end());
        string ans = "";
        for (auto &f : rep)
            ans+=f.second;
        return ans;
    }
};