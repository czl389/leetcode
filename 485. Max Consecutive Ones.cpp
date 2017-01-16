class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result=0;
        int consecutive=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==1) {
                consecutive++;
                if(i==nums.size()-1) {
                    if(consecutive>result)
                        result=consecutive;
                }
            }
            else {
                if(consecutive>result)
                    result=consecutive;
                consecutive=0;
            }
        }
        return result;
    }
};