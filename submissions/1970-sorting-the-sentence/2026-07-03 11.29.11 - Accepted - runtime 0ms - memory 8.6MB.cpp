class Solution {
public:
    string sortSentence(string s) {
      vector<string>ans(9);

      string word="";

      int count=0;

      for(int i=0;i<=s.size();i++){
        if(i==s.size()||s[i]==' '){
            int pos=word.back()-'0';
            word.pop_back();

            ans[pos-1]=word;

            count++;
            word="";
        }
        else{
            word+=s[i];
        }
      }
       string result="";

      for(int i=0;i<count;i++){
        result+=ans[i];
        if(i!=count-1){
            result+=" ";
        }
      }
      return result;
    }
};

