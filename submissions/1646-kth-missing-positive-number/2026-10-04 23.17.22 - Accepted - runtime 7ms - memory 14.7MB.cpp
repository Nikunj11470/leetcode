class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_set<int>st;

        for(int x:arr){
            st.insert(x);
        }
        int count=0;
        for(int i=1;i<INT_MAX;i++){
            if(st.find(i) == st.end()){
                count++;

                if(count==k){
                    return i;
                }
            }
        }

        return -1;
    }
};




        