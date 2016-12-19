class Solution {
public:
    int hammingDistance(int x, int y) {
        int z=x^y;
        int nums=0;
        int detect=1;//循环左移，与某数相与，可以检测该数每一位是否是1
        while(detect) {
            if(detect&z)
                nums++;
            detect=detect<<1;
        }
        return nums;
    }
};