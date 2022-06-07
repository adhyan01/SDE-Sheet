class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int sum = 0, maxi = nums[0], n = nums.size(), neg = nums[0];
        for(int i=0; i<n; i++)
        {
            sum += nums[i];
            if(sum>0)
                maxi = max(sum, maxi);
            else 
                sum = 0;
            if(nums[i]>neg)
                neg = nums[i];
        }
        return max(maxi,neg);
    }
};
