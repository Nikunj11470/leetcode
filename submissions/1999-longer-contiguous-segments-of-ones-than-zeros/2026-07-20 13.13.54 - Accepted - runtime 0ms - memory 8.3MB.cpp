class Solution {
public:
    bool checkZeroOnes(string s) {

        int maxCount=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                int count=1;
                for(int j=i+1;j<s.size();j++){
                    if(s[j]=='1'){
                        count++;
                    }
                    else{
                        break;
                    }
                }
                maxCount=max(count,maxCount);
            }
        }int m=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                int c=1;
                for(int j=i+1;j<s.size();j++){
                    if(s[j]=='0'){
                        c++;
                    }
                    else{
                        break;
                    }
                }
                m=max(c,m);
            }
        }

        return maxCount>m;
    }
};




          