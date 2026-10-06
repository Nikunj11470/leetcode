class Solution {
public:

    int reverseNumber(int n){
        int rev=0;
        while(n>0){
            int digit=n%10;
            rev=rev*10+digit;
            n/=10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {


        unordered_set<int>st;

        for(int x:nums){
            st.insert(x);
        }

        unordered_set<int>p;

        for(int i=0;i<nums.size();i++){
            int rev=reverseNumber(nums[i]);

            st.insert(rev);
        }
        int count=0;

        return st.size();
    }
};



