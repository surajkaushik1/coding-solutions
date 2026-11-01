class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int mn = INT_MAX;
        for(int i=0;i<nums.size()-1;i+=2){
            int z = 10;
            int  n = nums[i+1];
            while(n>=10){
                n = n / 10;
                z  *= 10;
            }
            int s = nums[i]*z+nums[i+1];
            mn = min(mn,s);
        }
        return mn;
    }
};