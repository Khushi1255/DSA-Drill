class Solution {
public:
    int calculate(string s) {
         char ch='+';
        int n=s.size();
        stack<int>st;
        int curr=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                curr=curr*10 + (s[i]-'0');
            }

            if(!isdigit(s[i]) && s[i]!=' ' || i==n-1)
            {
                if(ch=='+') st.push(curr);
                else if(ch=='-') st.push(-curr);

                else if(ch=='*')
                {
                    int top = st.top(); st.pop();
                    st.push(top * curr);
                }
                else if(ch=='/')
                {
                    int top = st.top(); st.pop();
                    st.push(top / curr);
                    
                }

                ch=s[i];
                curr=0;
            }
        }   
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};
