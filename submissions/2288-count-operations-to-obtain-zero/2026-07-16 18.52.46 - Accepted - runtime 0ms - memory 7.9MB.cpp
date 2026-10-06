class Solution {
public:
    int countOperations(int num1, int num2) {
        int p;
        int count=0;
        while(num1>0 && num2>0){
        
        if(num1>=num2){
            p=num1-num2;
            num1=p;
        }
        else{
            p=num2-num1;
            num2=p;
        }
        count++;
        }
        return count;
    }
};
