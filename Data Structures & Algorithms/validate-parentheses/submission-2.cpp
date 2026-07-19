class Solution {
public:
    bool matches(char top, char curr){
        if(top == '(' && curr == ')' || top == '[' && curr == ']' || top == '{' && curr == '}' ){
            return true;
        }
        return false;
    }
    
    bool isValid(string s) {
        stack<char> st; 

        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch == '[' || ch == '(' || ch == '{'){
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    char top = st.top();
                    if(matches(top,ch)){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }

        return st.empty();
    }
};
