class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size()==1)
            return s;
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(st.size()==0)
                st.push(s[i]);
            else if(st.top()==s[i])
                st.pop();
            else 
                st.push(s[i]);
        }
        
        int len=st.size();
        s="";
        for(int i=0;i<len;i++)
        {
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};