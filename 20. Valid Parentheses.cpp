class Solution {
public:
    bool isValid(string s) {
        stack<char> charstack;
        for(auto i:s) {
            if(i=='\('||i=='\['||i=='\{') {
                charstack.push(i);
                continue;
            }
            else if(charstack.empty())
                return false;
                
            switch(i) {
                case '\)':{
                    if(charstack.top()!='\(')
                        return false;
                    else
                        charstack.pop();
                    break;
                }
                case '\]':{
                    if(charstack.top()!='\[')
                        return false;
                    else
                        charstack.pop();
                    break;
                }
                case '\}':{
                    if(charstack.top()!='\{')
                        return false;
                    else
                        charstack.pop();
                    break;
                }
            }
        }
        if(charstack.empty())
            return true;
        else
            return false;
    }
};