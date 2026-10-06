class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count=0;
        for(char ch='a';ch<='z';ch++){
            int lower=-1;
            int upper=-1;

            for(int i=0;i<word.size();i++){
                if(word[i]==ch){
                    lower=i;
                }
                    if(word[i]==toupper(ch)&&upper==-1){
                        upper=i;
                    }

                }
                if(lower!=-1 && upper!=-1&& lower<upper){
                    count++;
                }
        }
        return count;
    }
};

