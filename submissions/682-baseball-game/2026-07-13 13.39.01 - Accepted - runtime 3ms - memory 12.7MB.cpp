class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int>st;

        for(int i=0;i<operations.size();i++){
            
            if(operations[i]=="C"){
                
                st.pop();
            }

            else if(operations[i]=="D"){
                int p=st.top();
                int q=2*p;

                st.push(q);
            }

            else if(operations[i]=="+"){
                int sum=0;
                int p=st.top();
                st.pop();

                sum+=p;

                int q=st.top();

                sum+=q;
                st.push(p);

                st.push(sum);
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        int sum=0;
        while(!st.empty()){
        sum+=st.top();
        st.pop();
        }

        return sum;
    }
}
;
