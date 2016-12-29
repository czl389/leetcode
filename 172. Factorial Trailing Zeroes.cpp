class Solution {
public:
    int trailingZeroes(int n) {
        //result=sum(n/5,n/5^2,n/5^3,...);
        int met=0;//max Exponent Term
        while(pow(5,met)<=n) {
            met++;
        }
        int result=0;
        for(int i=1;i<met;i++) {
            result+=n/pow(5,i);
        }
        return result;
    }
};