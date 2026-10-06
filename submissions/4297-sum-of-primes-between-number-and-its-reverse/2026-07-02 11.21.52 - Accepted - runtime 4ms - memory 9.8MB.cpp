class Solution {
public:

    vector<int> isPrime(int a,int n){
        vector<int>ans;


        for(int i=a;i<=n;i++){
            bool prime=true;
            if(i<2){
                prime=false;

            }

            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    prime=false;
                    break;
                }
            }
            if(prime){
                ans.push_back(i);
            }
            }
            return ans;
        }

           
            
     int revers(int n){
        int rev=0;
        while(n>0){

           int  digit=n%10;

            rev=rev*10+digit;

            n=n/10;
        }
        return rev;
     }
    int sumOfPrimesInRange(int n) {

        int p=revers(n);
        int a=min(n,p);
        int b=max(n,p);
        int sum=0;
        vector<int>ans;

        ans=isPrime(a,b);

        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
        }
        return sum;
    }
};

