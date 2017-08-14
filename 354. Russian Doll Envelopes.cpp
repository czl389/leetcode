class Solution {
public:
    int maxEnvelopes(vector<pair<int, int>>& envelopes) {
        if(0==envelopes.size())
            return 0;
        sort(envelopes.begin(),envelopes.end(),[](const pair<int,int> &a,const pair<int,int> &b) {
            if(a.first==b.first) return a.second>b.second;
            return a.first<b.first;
        });

        vector<int> h{};
        for(int i=0;i<envelopes.size();i++) {
            int flag=0;
            for(int j=0;j<h.size();j++) {
                if(envelopes[i].second<=h[j]) {
                    h[j]=envelopes[i].second;
                    flag=1;
                    break;
                }
            }
            
            if(i==0) {
                h.push_back(envelopes[i].second);
            }
            else if(flag==0&&envelopes[i].second>h.back()) {
                h.push_back(envelopes[i].second);
            }
        }
        
        return h.size();
    }
};