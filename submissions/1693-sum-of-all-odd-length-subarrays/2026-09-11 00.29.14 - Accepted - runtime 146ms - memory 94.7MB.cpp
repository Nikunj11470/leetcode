class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int sum=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                vector<int>ans;
                for(int k=i;k<=j;k++){
                    ans.push_back(arr[k]);
                }
            
                if(ans.size()%2!=0){
                    for(int p=0;p<ans.size();p++){
                        sum+=ans[p];
                    }
                    }
                
            }
        }
        return sum;
    }
};
