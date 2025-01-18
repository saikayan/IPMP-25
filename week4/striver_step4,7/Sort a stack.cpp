 void insertbottom(stack<int>&st,int x)
    {
        if(st.empty())
        {
            st.push(x);
            return;
        }
        int top_element=st.top();
        if(top_element>x){
        st.pop();
        insertbottom(st,x);
        st.push(top_element);}
        else
        st.push(x);
    }
void SortedStack :: sort()
{
        if(s.empty())
        return ;
        int temp=s.top();
        s.pop();
        sort();
        insertbottom(s,temp);
}