#include <algorithm>>
#include <iostream>
#include <string>
class Solution {
public:
    int reverse(int x) {
        std::string res = std::to_string(x);
        std::reverse(res.begin(),res.end());
        auto start = res.begin();
        while (start != res.end()) {
            if (*start == 0) {
                res.erase(*res.begin());
            }
            start++;
        }
        auto ans = std::stoll(res);
        if (ans < pow(2, -31) || ans >(pow(2, 31) - 1)) {
            return 0;
        }
        if (res[res.length() - 1] == '-') {
            ans *= -1;
        }
        return ans;
    }
};

int main()
{

    Solution sol;

    std::cout << sol.reverse(1534236469);
}


