class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int L = 0, R = n - 1;
        vector<int> res(n, 0);

        for (int i = n - 1; i >= 0; i--) {
            if (abs(nums[L]) > abs(nums[R])) {
                res[i] = nums[L]*nums[L];   
                L++;            
            } else {
                res[i] = nums[R]*nums[R];
                R--;
            }
        }
        return res;
    }
};