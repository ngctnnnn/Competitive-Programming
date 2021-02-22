class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for (int i = 0; i < command.size(); ++i)
            if (command[i] == ')')
                continue;
            else if (command[i] == '(') {
                if (command[i + 1] == ')')
                    ans+='o';
                else
                    continue;
            }
            else
                ans += command[i];
        return ans;
    }
};