#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    //nums = [-1,2,1,-4], target = 1
    //[-1,-1,1,1,3]target = -1
    //
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int dist = 999;
        int cur_dist = 999;
        pair<int, int> min_dist = {999,999};
        for (size_t i = 0; i < nums.size(); i++)
        {
            size_t start_search = i + 1;
            size_t end_search = nums.size() - 1;
            while (end_search > start_search) {
                int sum = nums[start_search] + nums[end_search] + nums[i];
                if (sum > target) {
                    cur_dist = abs(target - sum);
                    if (cur_dist < min_dist.first) {
                        min_dist.first = cur_dist;
                        min_dist.second = sum;
                    }
                    end_search--;
                    continue;
                }
                if (sum < target) {
                    cur_dist = abs(target - sum);
                    if (cur_dist < min_dist.first) {
                        min_dist.first = cur_dist;
                        min_dist.second = sum;
                    }
                    ++start_search;
                    continue;
                }
                return sum;
            }
        }
        return min_dist.second;
    }
};

int main()
{
    Solution sol;
    vector<int> vec = { 0,0,0};
    std::cout << sol.threeSumClosest(vec,1);
}

