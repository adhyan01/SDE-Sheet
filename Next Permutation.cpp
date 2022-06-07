class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), index = -1;
        for(int i=n-2; i>=0; i--)
        {
            if(nums[i] < nums[i+1]) 
            {
                index = i;
                break;
            }
        }
        if(index == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i=n-1; i>=0; i--)
        {
            if(nums[i] > nums[index])
            {
                int temp = nums[i];
                nums[i] = nums[index];
                nums[index] = temp;
                break;
            }
        }
        reverse(nums.begin()+index+1, nums.end());
    }
    // void reverse(vector<int> a, int x, int y)
    // {
    //     while(x,y)
    //     {
    //         int temp = a[x];
    //         a[x] = a[y];
    //         a[y] = temp;
    //         x++;
    //         y--;
    //     }
    // }
};
