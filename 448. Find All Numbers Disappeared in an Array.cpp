class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //这里排序的时间复杂度不止O(n),想不出好的算法了。。
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0)
            return nums;
        vector<int> result;
        //小端缺失的数字    
        int min=nums[0];
        while(min>1) {
            min=min-1;
            result.push_back(min);
        }
        //中间缺失的数字    
        for(int i=0;i<n-1;i++) {
            if(!(nums[i+1]==nums[i]||nums[i+1]==nums[i]+1)) {
                result.push_back(nums[i]+1);
                nums[i]=nums[i]+1;
                i--;
                
            }
        }
        //大端缺失的数字
        int max=nums[n-1];
        while(max<n) {
            max=max+1;
            result.push_back(max);
        }
        return result;
    }
};