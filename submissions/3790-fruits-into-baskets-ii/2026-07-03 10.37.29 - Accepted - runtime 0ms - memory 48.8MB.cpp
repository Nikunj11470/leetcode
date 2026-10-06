class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        
  int count=0;
        for(int i=0;i<fruits.size();i++){
            bool c=true;
            for(int j=0;j<baskets.size();j++){
                
                if(fruits[i]<=baskets[j]){
                    c=false;
                    baskets[j]=-1;
                    break;
                }
            }
            if(c){
                count++;
            }
        }
        return count;
    }
};

