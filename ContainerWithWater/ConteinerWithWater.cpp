#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {

        int my_size = height.size() - 1;
        int maximum = 0;
        auto start = height.begin();
        auto end = height.end() - 1;
        while (start != end) {
            maximum = max(min(*start, *end) * my_size, maximum);
            --my_size;
            if (*start < *end) {
                ++start;
            }
            else {
                --end;
            }
        }
        return maximum;
    }
};

int main()
{
    Solution sol;
    vector <int> vec = {1,1};
    std::cout << sol.maxArea(vec);
}