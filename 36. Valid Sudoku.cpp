class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //检查小方块
        for(int m=0;m<9;m=m+3) {
            for(int n=0;n<9;n=n+3) {
                unordered_map<char,int> mymap {0};
                for(int i=m;i<m+3;i++) {
                    for(int j=n;j<n+3;j++) {
                        mymap[board[i][j]]++;
                        //cout<<board[i][j]<<'\t';
                    }
                    //cout<<endl;
                }
                for(auto it=mymap.begin();it!=mymap.end();++it) {
                    if(it->first!='.'&&it->second>1)
                        return false;
                }
            }
        }
        //检查行
        for(int i=0;i<9;i++) {
            unordered_map<char,int> mymap {0};
            for(int j=0;j<9;j++) {
                mymap[board[i][j]]++;
            }
            for(auto it=mymap.begin();it!=mymap.end();++it) {
                if(it->first!='.'&&it->second>1)
                        return false;
            }
        }
        //检查列
        for(int i=0;i<9;i++) {
            unordered_map<char,int> mymap {0};
            for(int j=0;j<9;j++) {
                mymap[board[j][i]]++;//仅仅是调换i,j的位置，所以i,j代表行还是列发生了调换
            }
            for(auto it=mymap.begin();it!=mymap.end();++it) {
                if(it->first!='.'&&it->second>1)
                        return false;
            }
        }
        return true;
    }
};