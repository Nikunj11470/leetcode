class Solution {
public:
    int differenceOfSums(int n, int m) {
        vector<int>arr;
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(i%m!=0){

                arr.push_back(i);
            }
            else{
                ans.push_back(i);
            }
        }
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        int sum1=0;
        for(int j=0;j<ans.size();j++){
            sum1+=ans[j];
        }

        return sum-sum1;
    }
};


