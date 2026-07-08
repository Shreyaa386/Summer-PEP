class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        vector<int> freq(26, 0);
        vector<bool> visited(26, false);
        stack<char> st;
       
        for(char c : s)
            freq[c - 'a']++;
        
        for(char c : s) {
            
            freq[c - 'a']--;
            
            if(visited[c - 'a'])
                continue;
            
         
            while(!st.empty() && 
                  st.top() > c && 
                  freq[st.top() - 'a'] > 0) {
                
                visited[st.top() - 'a'] = false;
                st.pop();
            }
            
            st.push(c);
            visited[c - 'a'] = true;
        }
        
        
        string result = "";
        while(!st.empty()) {
            result = st.top() + result;
            st.pop();
        }
        
        return result;
    }
};