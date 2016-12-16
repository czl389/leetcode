class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowels;
        for(char i:s) {
            switch(i) {
                case 'a':vowels.push_back(i);break;
                case 'e':vowels.push_back(i);break;
                case 'i':vowels.push_back(i);break;
                case 'o':vowels.push_back(i);break;
                case 'u':vowels.push_back(i);break;
                case 'A':vowels.push_back(i);break;
                case 'E':vowels.push_back(i);break;
                case 'I':vowels.push_back(i);break;
                case 'O':vowels.push_back(i);break;
                case 'U':vowels.push_back(i);break;
                default:;
            }
        }
        for(int i=0;i<s.size();i++) {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'
            ||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
                s[i]=vowels.back();
                vowels.pop_back();
            }
        }
        
        return s;
    }
};