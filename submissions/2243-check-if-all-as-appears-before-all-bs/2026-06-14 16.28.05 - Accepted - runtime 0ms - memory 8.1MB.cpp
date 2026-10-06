class Solution {
public:
    bool checkString(string s) {
        bool st=false;

        for(char c:s){
            if(c=='b'){
                st=true;
                c++;
            }
            if(c=='a'&&st){
                return false;
            }
        }
        return true;
    }
};

