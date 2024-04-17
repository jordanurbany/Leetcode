class solution
{

public:
    int maxSubArray(vector<int> &nums)
    {
        int currentSum = nums[0];
        int maxSum = nums[0];

        for (int i = 0; i < nums.size(); i++)
        {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }
    }
    return maxSum;
};