class Solution {
public:
      
    int minimumInteger(long long n){
        if(n==1){
            return 0;
        }
        
        if(n%2==0){
            return 1+minimumInteger(n/2);

        }

        return 1+min(minimumInteger(n-1),minimumInteger(n+1));
    }

    int integerReplacement(int n) {
    return minimumInteger(n);
    }
        
};