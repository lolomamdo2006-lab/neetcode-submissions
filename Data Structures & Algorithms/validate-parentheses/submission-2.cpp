class Solution {
public:
stack<char> st;
    bool isValid(string s) {
        for(int i=0; i<s.size();++i){
            if(s[i]=='('||s[i]=='{'||s[i]=='[' ){
                  st.push(s[i]);
            }
            else{
                if(!st.empty()){
                if(st.top()=='('&&s[i]==')'||st.top()=='{'&&s[i]=='}'||
                 st.top()=='['&&s[i]==']'
                ){
                    st.pop();
                }
                 else{
                    return false;
                }}
              else return 0;

            }

        }
        if(st.empty()) return 1;
        return 0;
    }
};
