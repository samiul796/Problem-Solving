class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res;

        for (int i = 0; i < (int)nums.size(); i++)
        {

            int check = target - nums[i];

            auto it = find(nums.begin() + i + 1, nums.end(), check);

            if (it != nums.end())
            {
                res.push_back(i);
                res.push_back(it - nums.begin());
                return (res);
            }
        }
        return {};
    }
};