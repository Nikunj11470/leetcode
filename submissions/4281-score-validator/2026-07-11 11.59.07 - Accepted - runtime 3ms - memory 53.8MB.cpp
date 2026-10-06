class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score=0;
        int counter=0;

        for(string c:events){
            if(counter<10){
                
            if(isdigit(c[0])){
                score+=stoi(c);

            }
            else if(c=="W"){
                counter++;
            }

            else if(c=="WD"){
                score++;
            }

            else if(c=="NB"){
                score++;
            }
        }

        else{
            break;
        }
        }

        return {score,counter};
    }
};

