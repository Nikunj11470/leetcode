class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            string p=words[i];

            char ch=p[0];

            char sh=p[p.size()-1];

            if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') && (sh=='a'||sh=='e'||sh=='i'||sh=='o'||sh=='u')){
                count++;
            }
        }
        return count;
    }
};
