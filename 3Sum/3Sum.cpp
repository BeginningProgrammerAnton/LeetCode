#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int cur;
        vector<vector<int>> res;
        vector <int> res_cur;
        sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            size_t first_search = i + 1;
            size_t last_search = nums.size() - 1;
            int right_num = 0 - nums[i];

            while (last_search > first_search) {
                int sum = nums[first_search] + nums[last_search];
                if (sum < right_num) {
                    ++first_search;
                }
                else if (sum > right_num) {
                    --last_search;
                }
                else {
                    res.push_back({ nums[i],nums[first_search],nums[last_search] });
                    ++first_search;
                    while (last_search > first_search && nums[first_search] == nums[first_search - 1]) {
                        ++first_search;
                    }
                }
            }
         
        }
       return res;
    }
};



int main()
{
    vector<int> num = {};
    Solution sol;
    auto a = sol.threeSum(num);
}
