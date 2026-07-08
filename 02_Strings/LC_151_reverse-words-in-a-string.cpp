class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.length() - 1;

        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') i--;   
            if (i < 0) break;

            int j = i;
            while (i >= 0 && s[i] != ' ') i--;   
            ans += s.substr(i + 1, j - i) + " ";
        }

        ans.pop_back(); 
        return ans;
    }
};
