class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            char ch=s[i];

            char ph='z'-ch+1;
            int p=26-i;

            int q=i+1;
            sum+=ph*q;

        }
        return sum;
    }
};
