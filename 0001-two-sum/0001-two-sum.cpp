#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution{
    public:
    vector<int>twoSum(vector<int> & nums, int target){
        unordered_map<int, size_t> num_map;

        for(size_t i=0; i<nums.size(); i++) {
            int complement = target - nums[i];
            auto it = num_map.find(complement);

            if (it != num_map.end()){

                return {static_cast<int>(it-> second), static_cast<int>(i)};
            }
            num_map[nums[i]] = i;
        }

        return{};
    } 
};