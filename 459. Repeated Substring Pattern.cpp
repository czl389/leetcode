class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        int length=str.size();
        for(int i=1;i<=length/2;i++) {
            string sub=str.substr(0,i);
        if(length%i==0&&isRepeaSub(sub,str))
                return true;
        }
        return false;
    }
    bool isRepeaSub(string sub,string str) {
        int lenth1=sub.size();
        int lenth2=str.size();
        int n=lenth2/lenth1;
        string append_str;
        while(n){
            append_str+=sub;
            n--;
        }
        
        if(append_str==str)
            return true;
        else
            return false;
    }
};