class Solution {
public:
    int trap(vector<int>& height) {
        int lt=1;
        int n=height.size();
        int rt=n-2;
        int ans =0;
        int left_max=height[0];
        int right_max=height[n-1];
        while(lt<=rt){
            left_max=max(left_max,height[lt]);
            right_max=max(right_max,height[rt]);
            if(left_max<right_max){
                ans+=(left_max-height[lt]);
                lt++;
            }else{
                ans+=(right_max-height[rt]);
                rt--;
            }
        }
        return ans; 
    }
};
