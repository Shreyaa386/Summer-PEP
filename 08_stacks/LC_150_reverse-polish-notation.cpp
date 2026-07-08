class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        bool isOperator = false;
        for(int i=0;i<tokens.size();i++){
            string str=tokens[i];
            if(str=="+"||
            str=="-" ||
            str=="*" ||
            str =="/")
            isOperator = true;
            else
            isOperator=false;
            if(isOperator){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(str=="+"){
                    st.push(b+a);
                }
                else if(str=="-"){
                    st.push(b-a);
                }
                else if(str=="*"){
                    st.push(b*a);
                }
                else{
                    st.push(b/a);
                }
            }
            else{
                int val=stoi(str);
                st.push(val);
            }
        }
        return st.top();
    }
};