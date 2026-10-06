class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count=0;
        for(char c:s){
            if(c==letter){
                count++;
            }
        }

        int n=s.size();

        int p=(count*100)/n;

        

        return p;
    }
};
