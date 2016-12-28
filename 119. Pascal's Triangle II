class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int numRows=rowIndex+1;
        vector<vector<int>> results;
        vector<int> tmp{1};
        if(numRows==0) {
            results={};
        }
        else {
            
            results.push_back(tmp);
        }
        for(int i=2;i<=numRows;i++) {
            tmp={};
            for(int j=1;j<=i;j++) {
                if(j==1||j==i)
                    tmp.push_back(1);
                else
                    tmp.push_back(results[i-2][j-2]+results[i-2][j-1]);
            }
            results.push_back(tmp);
        }
        return results[rowIndex];
    }
};