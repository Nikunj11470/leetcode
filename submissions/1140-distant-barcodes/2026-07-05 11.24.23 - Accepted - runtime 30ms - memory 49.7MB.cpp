class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        unordered_map<int,int>freq;

        for(int x:barcodes){
            freq[x]++;
        }

        vector<pair<int,int>>v;

        for(auto&p:freq){
            v.push_back({p.second,p.first});

        }

        sort(v.rbegin(),v.rend());

        vector<int> ans(barcodes.size());

        int idx=0;

        for(auto &p:v){
            int count=p.first;
            int val=p.second;

            while(count--){
                if(idx>=barcodes.size()){
                    idx=1;
                }

                ans[idx]=val;

                idx+=2;
            }
        }
        return ans;
    }
};


