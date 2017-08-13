class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size()<2)
            return 0;
        if(2==height.size())
            return min(height[0],height[1]);
        
        int pl=0;
        int pr=height.size()-1;
        int maxl=height.front();
        int maxr=height.back();
        int most=min(maxl,maxr)*(height.size()-1);
        while(pl<=pr) {
            if(maxl<maxr) {
                pl++;
                maxl=height[pl];
                
            }
            else {
                pr--;
                maxr=height[pr];
            }   
            most=max(most,min(maxl,maxr)*(pr-pl));
        }
        return most;
    }
};