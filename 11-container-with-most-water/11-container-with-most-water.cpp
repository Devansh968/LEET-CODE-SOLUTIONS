class Solution {
public:
    int maxArea(vector<int>& height) {
      int ma = INT_MIN;
     int  l  =0;
     int  r = height.size()-1;
     while(l<r)
     {
         int  lh  = height[l];
         int rh =  height[r];
         
         int min_h =  min(height[l],height[r]);
         ma   =  max(ma, min_h*(r-l));
         if(lh<rh) l++;
         else r--;
     }
        return  ma;
    }
};