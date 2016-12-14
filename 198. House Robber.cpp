class Solution {
public:
    int rob(vector<int>& nums) {
        //dynamic programing 
        //recursion formular maxV[i]=max(maxV[i-2]+nums[i],maxV[i-1]),
        //where maxV[i] is the maximum amount of money when robber go to the ith house
        int n=nums.size();
        if(n==0)
            return 0;
        else if(n==1)
            return nums[0];
        else if(n==2)
            return max(nums[0],nums[1]);
        vector<int> maxV;
        maxV.push_back(nums[0]);
        maxV.push_back(max(nums[1],maxV[0]));
        for(int i=2;i<n;i++) {
            maxV.push_back(max(maxV[i-2]+nums[i],maxV[i-1]));
        }
        return maxV[n-1];
    }
};