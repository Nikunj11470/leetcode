class Solution {
public:
    bool judgeCircle(string moves) {
        if(moves.size()%2!=0){
            return false;
        }
        else{
            int count1=0;
            int count2=0;
            int count3=0;
            int count4=0;

            for(char ch:moves){
                if(ch=='L'){
                    count1++;
                }
                else if(ch=='R'){
                    count2++;
                }
                else if(ch=='U'){
                    count3++;
                }
                else if(ch=='D'){
                    count4++;
                }

            }
            if(count1==count2  && count3==count4){
                return true;
            }

        }
        return false;
    }
};

