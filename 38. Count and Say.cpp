class Solution {
public:
    string countAndSay(int n) {
        string result="1";
        while(n-1!=0) {
            result=countandSay(result);
            n--;
        }
        return result;
    }
    string countandSay(string str) {
        string say{};
        int count=1;
        if(str.size()==1) {
            say.push_back('1');
            say.push_back(str[0]);
            return say;
        }
        for(int i=0;i<str.size()-1;i++) {
            if(str[i+1]==str[i]) {
                count++;
                if(i==str.size()-2) {
                    say.append(to_string(count));
                    say.push_back(str[i]);
                }
            }
            else {
                say.append(to_string(count));
                say.push_back(str[i]);
                count=1;
                if(i==str.size()-2) {
                    say.push_back('1');
                    say.push_back(str[i+1]);
                }
                    
            }
        }
        return say;
    }
};