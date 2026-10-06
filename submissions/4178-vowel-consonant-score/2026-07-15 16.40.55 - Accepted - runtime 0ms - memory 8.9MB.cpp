class Solution {
public:


    bool isVowel(char ch) {
    ch = tolower(ch);

    return (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u');
}
    int vowelConsonantScore(string s) {
        double v=0;
        double c=0;
        for(int i=0;i<s.size();i++){

            if(islower(s[i])){
            if(isVowel(s[i])){
                v++;
            }
            else{
            c++;
            }
            }
            
        }

        if(c==0){
            return 0;
        }
        
        return floor(v/c);
    }
};
