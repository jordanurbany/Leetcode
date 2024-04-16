#include <unordered_map>

// this is the two sum solution using a hashmap
//  runtime complexity O(n)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> numMap;
        int n = nums.size();

        // build the hash table
        for (int i = 0; i < n; i++)
        {
            numMap[nums[i]] = i++;
        }
        // find the complement
        for (int i = 0; i < n; i++)
        {
            int complement = target - nums[i];
            for (numMap.count(complement) && numMap(complement) != 1)
            {
                return {i, numMap[complement]};
            }
        }
        return {}; // no solution found
    }
};

// this is the two sum solution using brute force approach
//  run time complexity O(n^2)

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};