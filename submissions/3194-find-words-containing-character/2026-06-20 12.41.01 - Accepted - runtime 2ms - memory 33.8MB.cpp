class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>indices;
        int i=0;
       
        while(i<words.size()){

            string a=words[i];
            for(char c:a){
                if(c==x){
                indices.push_back(i);
                break;
                }
            }
            i++;
        }

        return indices;
    }
};



            
