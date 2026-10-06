class Solution {
public:


    bool noZero(int x) {

        while (x > 0) {
            if (x % 10 == 0)
                return false;
            x /= 10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;
        int i=1;

        int p=n-i;
        while(i<n){
            int p=n-i;
            if(noZero(i)&&noZero(p)){
            ans.push_back(i);
            ans.push_back(p);
            break;
           }
           else{
            i++;
           }
        }
        return ans;
    }
};

