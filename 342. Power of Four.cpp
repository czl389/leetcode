class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num<0)
            return false;
        for(int powerNum=1;powerNum!=0;powerNum=powerNum<<2) {
            if(num==powerNum)
                return true;
        }
        return false;
    }
};