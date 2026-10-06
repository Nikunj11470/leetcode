class Solution {
public:
    int monotoneIncreasingDigits(int n) {
       string p=to_string(n);
       int mark=p.size();
       for(int i=p.size()-1;i>0;i--){
        if(p[i-1]>p[i]){
            p[i-1]--;
           mark=i;
            
        }
       }
       for(int i=mark;i<p.size();i++){
        p[i]='9';
       }
       return stoi(p);
       }
       };


    