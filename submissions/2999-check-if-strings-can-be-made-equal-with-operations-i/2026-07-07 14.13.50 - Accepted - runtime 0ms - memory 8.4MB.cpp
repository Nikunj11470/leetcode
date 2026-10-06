class Solution {
public:

    void swap(char &c,char &d){
        char temp=c;
        c=d;
        d=temp;
    }
    
    bool canBeEqual(string s1, string s2) {
        if(s1==s2){
            return true;
        }
        int n=s1.size();
        
        swap(s1[0],s1[2]);
            if(s1==s2){
                return true;
            }
        swap(s1[0],s1[2]);


         swap(s1[1],s1[3]);
            if(s1==s2){
                return true;
            }
         swap(s1[1],s1[3]);


         swap(s1[0],s1[2]);
         swap(s1[1],s1[3]);

         if(s1==s2){
            return true;
         }


         return false;
    }
};


