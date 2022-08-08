class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
        //only entering those elements in stack which are unique consecutively.
    	stack<char> st;
    	for(int i=0;i<s.length();i++)
    		{
    			if( (st.empty()==0 && st.top()!=s[i] ) || st.empty() == 1  )
    				st.push(s[i]);
    		}
    	// storing stack elements in string.	
    	string res;
    	while(st.empty()==0)
    		{
    			res+=st.top();
    			st.pop();	
    		}
    	
    	// reversing the string because stack is a LIFO data structure.	
    	reverse(res.begin(),res.end());
    	return res;		
    }
};
