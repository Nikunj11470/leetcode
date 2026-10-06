class Solution {
public:
    string lexSmallest(string s) {
        string best=s;
        int n=s.size();
        for(int k=1;k<=n;k++){
            string t=s;


            reverse(t.begin(),t.begin()+k);
            best=min(best,t);

            string p=s;
            reverse(p.end()-k,p.end());

            best=min(best,p);

        }
        return best;
    }
};

