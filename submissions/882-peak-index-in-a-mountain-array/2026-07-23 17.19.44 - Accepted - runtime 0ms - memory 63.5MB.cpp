class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int ans=0;
       int p=-1;

       for(int i=0;i<arr.size();i++){
        if(ans<arr[i]){
           ans=arr[i];
           p=i;
        }
       }

       return p;
    }
};
