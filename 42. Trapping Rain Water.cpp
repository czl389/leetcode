class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<=2)
            return 0;
        int pleft=1;
        int pright=height.size()-2;
        int maxl=height.front();
        int maxr=height.back();
        int water=0;
        while(pleft<=pright) {
            if(maxl<=height[pleft]) {
                maxl=height[pleft];
                pleft++;
                continue;
            }
            if(maxr<=height[pright]) {
                maxr=height[pright];
                pright--;
                continue;
            }
            if(maxl<=maxr) {
                water+=(maxl-height[pleft]);
                    pleft++;
            } else {
                water+=(maxr-height[pright]);
                pright--;
            }
                
        }
        return water;
        
    }
};