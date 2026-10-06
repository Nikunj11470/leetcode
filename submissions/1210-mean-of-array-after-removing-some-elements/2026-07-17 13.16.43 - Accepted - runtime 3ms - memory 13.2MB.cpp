class Solution {
public:
    double trimMean(vector<int>& arr) {

        sort(arr.begin(),arr.end());
        double sum=0;
        int remove=arr.size()/20;


        for(int i=remove;i<arr.size()-remove;i++){
            sum+=arr[i];
        }


        int n=arr.size()-2*remove;

        double mean=sum/n;

        return mean;
    }
};

