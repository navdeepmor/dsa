    nums = [2,-3,0,-2,-5,-5,-4,1,2,-2,2,0,2,-4,5,5,-10]

           [-10,-5,-5,-4,-4,-3,-2,-2,0,0,1,2,2,2,2,5,5]
             i  lo                                   hi

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<vector<int>> res;
        for (int i = 0; i < nums.size() && nums[i] <= 0; ++i)
            if (i == 0 || nums[i - 1] != nums[i]) { // SKIP DUPLICATE
                twoSumII(nums, i, res);
            }
        return res;
    }
    void twoSumII(vector<int>& nums, int i, vector<vector<int>>& res) {
        int lo = i + 1, hi = nums.size() - 1;
        while (lo < hi) {
            int sum = nums[i] + nums[lo] + nums[hi];
            if (sum < 0) {
                ++lo;
            } else if (sum > 0) {
                --hi;
            } else {
                res.push_back({nums[i], nums[lo++], nums[hi--]});
                while (lo < hi && nums[lo] == nums[lo - 1]) ++lo; // SKIP DUPLICATE
            }
        }
    }

    TC: O(n^2)
    SC: O(n)