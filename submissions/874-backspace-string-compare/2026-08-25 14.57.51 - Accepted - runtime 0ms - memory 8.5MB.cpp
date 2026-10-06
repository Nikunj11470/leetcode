class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;

        string st1;
        for(int i=0;i<s.size();i++){

        if(s[i]=='#'){ 
        if(!st.empty()){
            st.pop();
        }
        
        }
       else{
        st.push(s[i]);
       }
        }
      
        

        while(!st.empty()){
            char ch=st.top();
            st.pop();
            st1.push_back(ch);
        }

        reverse(st1.begin(),st1.end());
 
string st2;


        for(int i=0;i<t.size();i++){

        if(t[i]=='#'){ 
        if(!st.empty()){
            st.pop();
        
        }
        }
        else{
          st.push(t[i]);
       
        }
        }
      
        while(!st.empty()){
            char ch=st.top();
            st.pop();
            st2.push_back(ch);
        }

        reverse(st2.begin(),st2.end());
        if(st1==st2){
            return true;
        }

        return false;
    }
};
