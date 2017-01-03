class Solution {
public:
    bool isPalindrome(int x) {
        //负数返回false
        if(x<0) {
            return false;
        }
        //求输入数位数
        int q=x;
        int n=0;//输入数位数
        while(q!=0) {
            q/=10;
            n++;
        }
        //个位数返回true
        if(n==1) {
            return true;
        }
        //依次从左和右端取数并比较
        int i,num,right,left;
        for(i=0,num=x,right=0,left=0;i<n/2;i++) {
            right=num%10;
            num/=10;
            int p=pow(10,n-2*i-2);
            left=num/p;
            num%=p;
            if(left!=right) {
                return false;
            }
        }
        return true;
    }
};