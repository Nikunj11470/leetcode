class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> closer=arr;
        int a=0;
  
        for(int i=0;i<closer.size()-1;i++){
            for(int j=i+1;j<closer.size();j++){

            if((abs(closer[i]-x)>abs(closer[j]-x))||((abs(closer[i]-x)==abs(closer[j]-x))&&(closer[i]>closer[j]))){
                swap(closer[i],closer[j]);
            }
            }
        }
        closer.resize(k);
        sort(closer.begin(),closer.end());
        return closer;
        
    }
};