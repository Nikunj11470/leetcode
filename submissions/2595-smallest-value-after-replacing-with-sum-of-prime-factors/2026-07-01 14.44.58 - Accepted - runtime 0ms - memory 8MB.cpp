class Solution {
public:

    vector<int> prime(int n){

        vector<int> ans;

        for(int i=2;i*i<=n;i++){

            while(n%i==0){

                ans.push_back(i);

                n/=i;
            }
        }

        if(n>1)
            ans.push_back(n);

        return ans;
    }

    int smallestValue(int n) {

        while(true){

            vector<int> p = prime(n);

            int sum = 0;

            for(int x : p)
                sum += x;

            if(sum == n)
                return n;

            n = sum;
        }
    }
};