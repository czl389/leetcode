// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        if(!guess(n))
            return n;
        if(!guess(1))
            return 1;
        //测例[2126753390 1702766719]通不过，是因为运算超过了int的范围，改为unsigned int
        unsigned int a=1,b=n;
        unsigned int mid=(a+b)/2;
        unsigned int judge=guess(mid);
        while(judge!=0) {
            if(judge==1) {
                a=mid;
            }
            else if(judge==-1) {
                 b=mid;
            }
            mid=(a+b)/2;
            judge=guess(mid);
        }
        return mid;
    }
    
};