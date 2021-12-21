#include <algorithm>
#include <string>
#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        std::string s_rev = s;
        if (isdigit(s[0])) {
      
            std::reverse(s_rev.begin(), s_rev.end());
            if (s_rev == s) {
                return true;
            }
        }
        else {
            if (s[0] == '-') {
                return false;
            }
            else {
                std::reverse(s_rev.begin() + 1, s_rev.end());
                if (s_rev == s) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    Solution sol;
    std::cout << sol.isPalindrome(12321);
}
