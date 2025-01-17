class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(s[i]==')'||s[i]=='}'||s[i]==']')
            {
                if(!st.empty())
                {
                    char x=st.top();
                    if((s[i]==')'&&x=='(')||(s[i]=='}'&&x=='{')||(s[i]==']'&&x=='['))
                    st.pop();
                    else
                    return false;
                }
                else
                {
                    return false;
                }
            }
        }
        if(st.empty())return true;
        return false;
    }
};