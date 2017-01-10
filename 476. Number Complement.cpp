class Solution {
public:
    int findComplement(int num) {
        int n=1;
        while(pow(2,n)<=num) {
            n++;
        }
        int mask=0xffffffff<<n;
        num=num|mask;
        
        return ~num;
    }
};