class Solution {
public:

void rotate(vector<int>&nums,int k){
    int n=nums.size();

    k=k%n;

    for(int x=0;x<k;x++){

        int last=nums[n-1];


        for(int i=n-1;i>0;i--){
            nums[i]=nums[i-1];
        }

        nums[0]=last;
    }

}
    bool check(vector<int>& nums) {
        vector<int>st;


        for(int x:nums){
            st.push_back(x);
        }

        sort(st.begin(),st.end());


        for(int i=0;i<st.size();i++){
            vector<int>temp=st;
            rotate(temp,i);

            if(temp==nums){
                return true;
            }
        }

        return false;
    }
};

