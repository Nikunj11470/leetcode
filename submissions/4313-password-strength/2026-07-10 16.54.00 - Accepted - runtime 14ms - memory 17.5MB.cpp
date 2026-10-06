class Solution {
public:
    int passwordStrength(string password) {

        unordered_set<char>st;

        int sum=0;

        for(char c:password){
            if(st.count(c)){
                continue;
            }
            else{
                st.insert(c);
                if(islower(c)){
                    sum+=1;
                }
                else if(isupper(c)){
                    sum+=2;
                }

                else if(isdigit(c)){
                    sum+=3;
                }

                else{
                    sum+=5;
                }
            }
        }
        return sum;
    }
};

