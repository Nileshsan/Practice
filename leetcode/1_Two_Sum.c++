#include<stdio.h>
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> num_map;

        for (int i=0; i< nums.size(); i++)
        {
            int complement = target -nums[i];
            if (num_map.find(complement) != num_map.end())
            {
                return {num_map[complement], i};
            }

            num_map[nums[i]] = i;
        }   
        return {};
    }
    
};


int main()
{
    Solution sol;    vector<int> nums = {2, 7, 11, 15, 10, 0};
    int target = 19;
    vector<int> result = sol.twoSum(nums, target);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
