class Solution {
public:
    string resultingString(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(st.size()==0) st.push(s[i]);
            else{
                if(st.size()>0 && (abs(s[i]-st.top())==1 || abs(s[i]-st.top())-24==1 )){
                    st.pop();
                }
                else st.push(s[i]);
            }

        }
        string ans;
        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};