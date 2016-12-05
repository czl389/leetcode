class Solution {
public:
    int countSegments(string s) {
        int length=s.size();
        int count=0;
        if(length==1&&s[0]!=' ')
            return 1;
        for(int i=1;i<length;i++) {
               if(s[i-1]!=' '&&s[i]==' ') {
                   count++;
               }
               if(i==length-1&&s[i]!=' ')
                   count++;
        }
        return count;
    }
};