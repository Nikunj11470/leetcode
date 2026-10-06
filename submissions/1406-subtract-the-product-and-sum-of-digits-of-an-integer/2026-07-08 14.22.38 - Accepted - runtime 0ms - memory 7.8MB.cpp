class Solution {
public:
    int subtractProductAndSum(int n) {
        string p=to_string(n);
        int sum=0;
        int product=1;

        for(int i=0;i<p.size();i++){
            sum+=p[i]-'0';
            product*=p[i]-'0';
        }

        return product-sum;
    }
};
