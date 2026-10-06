class Solution {
public:

    int freq(string s){
        char smallest='z';

        for(char ch:s){
            if(ch<smallest){
                smallest=ch;
            }
        }
            int count=0;

            for(char ch:s){
                if(ch==smallest){
                    count++;
                }
            }
            return count;
    }
       
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        
        vector<int>answer;

        for(int i=0;i<queries.size();i++){
            int count=0;
            for(int j=0;j<words.size();j++){
                if(freq(queries[i])<freq(words[j])){
                    count++;
                }
            }
            answer.push_back(count);
        }
        return answer;
        
    }
};

