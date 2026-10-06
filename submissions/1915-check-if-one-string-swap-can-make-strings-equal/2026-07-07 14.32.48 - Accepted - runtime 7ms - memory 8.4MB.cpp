class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2){
            return true;
        }
        int n=s1.size();
        for(int i=0;i<s1.size();i++){
            for(int j=i+1;j<s1.size();j++){
            swap(s1[i],s1[j]);
            if(s1==s2){
                return true;
            }
            swap(s1[i],s1[j]);
            }
        }
        return false;
    }
};

