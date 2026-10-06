class Solution {
public:

string b(int n){
    string p=to_string(n);

    string binary="";

    while(n>0){
        binary+=(n%2)+'0';

        n/=2;

    }
    reverse(binary.begin(),binary.end());

    return binary;
}
    
    bool hasAlternatingBits(int n) {


        string p=b(n);

        for(int i=0;i<p.size()-1;i++){
            if(p[i]==p[i+1]){
                return false;
            }
        }
        return true;
    }
};
