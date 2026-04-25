class Solution {
    int hammingWeight(int n) {
        int count=0;
        while(n){
            n=n&(n-1);
            count++;
        }
        return count;
    }
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0;i<=n;i++){
            ans[i]=hammingWeight(i);
        }
        return ans;
    }
};
