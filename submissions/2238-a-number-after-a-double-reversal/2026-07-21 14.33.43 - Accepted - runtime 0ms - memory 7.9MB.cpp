class Solution {
public:

    int isreverse(int n){
        int rev=0;

        while(n>0){
            int digit=n%10;
            rev=rev*10+digit;
            n/=10;
        }

        return rev;
    }
    bool isSameAfterReversals(int num) {


        int p=isreverse(num);

        return isreverse(p)==num;
    }
};

