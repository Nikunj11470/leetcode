class Solution {
public:


    string to4Digits(int num){
        string s=to_string(num);
        while(s.size()<4){
        s="0"+s;
        }
    
    return s;
    }
    int generateKey(int num1, int num2, int num3) {
        string a= to4Digits(num1);
        string b=to4Digits(num2);
        string c=to4Digits(num3);

        string res="";
        for(int i=0;i<4;i++){
            char mn=min({a[i],b[i],c[i]});
            res.push_back(mn);
        }
        return stoi(res);
    }
};

