class Solution {
public:
    int hammingWeight(uint32_t n) {
        //数字1迭代左移32次，每次与输入数字相与，不等于0则说明该位为1；
        int bits=32;
        int count=0;
        int extract=1;
        while(bits) {
            if((n&extract)!=0)
                count++;
            extract=extract<<1;
            bits--;
        }
        return count;
    }
};