class Solution {
public:
    long long climbStairs(int n) {
        //I find the regular pattern,and the result is fibonacci sequence,but why...
        long long result=0;
        //because using recursion is time exceeded when n is large,so using general formulas here
        result=1.0/sqrt(5)*(pow((1+sqrt(5))/2.0,n+1)-pow((1-sqrt(5))/2.0,n+1));
        return result;
    }
};