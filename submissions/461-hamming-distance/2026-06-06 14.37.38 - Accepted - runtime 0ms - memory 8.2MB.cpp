class Solution {
public:
string toBinary(int n) {
   if(n==0)
   return "0";


   string s="";
   while(n>0){
    s=char('0'+(n%2))+s;
    n/=2;
   }
   return s;
}
   
    int hammingDistance(int x, int y) {
        

        string a= toBinary(x);
        string b=toBinary(y);
        
        int count=0;
        while(a.size()<b.size())
        a='0'+a;

        while(b.size()<a.size())
        b='0'+b;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i])
            count++;
        }
        return count;
        }
};
