class Solution {
public:
    bool validDigit(int n, int x) {

        string p=to_string(n);

        char ch=p[0];
        char digit=x+'0';
        for(int i=1;i<p.size();i++){
            if(ch!=digit && p[i]==digit){
                return true;
            }
        }
        return false;
    }
};

