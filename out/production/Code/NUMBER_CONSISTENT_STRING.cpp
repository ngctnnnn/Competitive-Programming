class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> umap;
        for (int i = 0; i < allowed.length(); ++i)
            umap.insert({allowed[i], 0});
        bool ok = 1;
        int cnt = 0;
        for (int i = 0; i < words.size(); ++i){ 
            for (int j = 0; j < words[i].length(); ++j){ 
                if (umap.find(words[i][j]) == umap.end()) {
                    ok = 0;
                    break;
                }
            }
            if (ok) cnt++;    
            ok = 1;
        }
        return cnt;
    }
};