class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int left=0;
        int right=n-1;
        int ans=0;
        while(left<right){
            int curr_max=(right-left)*min(heights[left],heights[right]);
            ans=max(ans,curr_max);
            if(heights[left]<heights[right]){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};
