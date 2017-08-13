class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int len=1;
        for(int i=1;i<nums.size();i++) {
            int flag=0;
            for(int j=0;j<len;j++) {
                if(nums[j]>=nums[i]) {
                    nums[j]=nums[i];
                    flag=1;
                    break;
                }
            }
            if(flag==0) {
                nums[len]=nums[i];
                len++;
            }
        }
        return len;
    }
};