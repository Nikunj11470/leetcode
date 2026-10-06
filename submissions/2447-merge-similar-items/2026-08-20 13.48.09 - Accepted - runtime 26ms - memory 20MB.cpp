class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
       vector<vector<int>>ans;


       for(int i=0;i<items1.size();i++){
        int p=items1[i][0];
        int sum=items1[i][1];
        
      

        for(int j=0;j<items2.size();j++){
            if(items2[j][0]==p){
                sum+=items2[j][1];
               
            }
        }

        

        ans.push_back({p,sum});

        
       }




       for(int i=0;i<items2.size();i++){
        int p=items2[i][0];
        bool q=false;

        for(int j=0;j<items1.size();j++){
            if(items1[j][0]==p){
                q=true;
                break;
            }
        }

        if(!q){
            ans.push_back({p,items2[i][1]});
        }
       }


       sort(ans.begin(),ans.end());



       return ans;
    }
};

