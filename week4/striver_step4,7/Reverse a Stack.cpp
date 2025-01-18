class Solution{
public:
    void insertbottom(stack<int>&st,int x)
    {
        if(st.empty())
        {
            st.push(x);
            return;
        }
        int top_element=st.top();
        st.pop();
        insertbottom(st,x);
        st.push(top_element);
    }
    void Reverse(stack<int> &st){
        if(st.empty())
        return ;
        int temp=st.top();
        st.pop();
        Reverse(st);
        insertbottom(st,temp);
    }
};