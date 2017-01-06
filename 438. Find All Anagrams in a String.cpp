class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        //"hash+slide window" method
        vector<int> result{};
        int l1=s.size();
        int l2=p.size();
        //并非真的hash，这里key已知（0-255），用vector来实现
        vector<int> hash1(256,0);
        vector<int> hash2(256,0);
        //hash1记录p
        for(auto c:p) {hash1[c]++; }
        //hash2是slide window,记录s上p.size()长度的数据
        for(int i=0;i<l1;i++) {
            hash2[s[i]]++;
            if(i>=l2)
                hash2[s[i-l2]]--;
            //比较两个hash table
            if(hash1==hash2) {
                result.push_back(i-l2+1);
            }
        }
        return result;
    }
};