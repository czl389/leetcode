class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> strVec{};
        for(int i=0,j=0;i<str.size();i++) {
            if(i==str.size()-1)
                strVec.push_back(str.substr(j,i-j+1));
            else if(str[i]==' ') {
                strVec.push_back(str.substr(j,i-j));
                j=i+1;
            }
        }
        
        if(pattern.size()!=strVec.size())
            return false;
        vector<string> map{256};//一一映射
        
        for(int k=0;k<pattern.size();k++) {
            if(map[pattern[k]]=="") {
                map[pattern[k]]=strVec[k];
            }
            else {
                //检查一致性
                if(map[pattern[k]]!=strVec[k]) {
                    return false;
                }
            }
        }
        //创建hash的目的是看有没有不同的字母映射为同个单词
        unordered_map<string,int> hashmap{0};
        for(auto i:map) {
            hashmap[i]++;
        }
        for(auto it=hashmap.begin();it!=hashmap.end();++it) {
            if(it->first!=""&&it->second>1) {
                return false;
            }
        }
        return true;
    }
};