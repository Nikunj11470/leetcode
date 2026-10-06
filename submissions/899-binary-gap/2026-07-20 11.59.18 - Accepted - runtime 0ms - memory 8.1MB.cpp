class Solution {
public:
    int binaryGap(int n) {

        string binary="";
        while(n>0){
            binary+=(n%2)+'0';

            n/=2;
        }

        reverse(binary.begin(),binary.end());
    
       
        int maxCount=0;

        for(int i=0;i<binary.size();i++){

            if(binary[i]=='1'){
                for(int j=i+1;j<binary.size();j++){
                    if(binary[j]=='1'){
                        maxCount=max(maxCount,j-i);
                        break;
                    }
                }
            }
        }
        return maxCount;
    }
};



