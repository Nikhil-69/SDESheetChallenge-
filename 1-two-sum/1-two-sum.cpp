class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            int n = nums.size();
            vector<int> v;
            for (int i = 0; i < n; i++)
            {
                int a = nums[i];
                for (int j = i + 1; j < n; j++)
                {
                    int b = nums[j];
                    if (a + b == target)
                    {
                        v.push_back(i);
                        v.push_back(j);
                    }
                }
            }
            return v;
        }
};