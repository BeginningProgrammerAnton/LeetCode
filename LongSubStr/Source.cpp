#include <string>
#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<const char, int> map;
        int i = 0;
        int count = 0;
        int max_count;
        while (i != s.size()) {
            if (map.count(s[i])) {
                max_count = max(max_count, count);
                count = 0;
                i = map[s[i]] + 1;
                map.clear();
            }
            else {
                map.insert(make_pair(s[i], i));
                ++count;
                ++i;
            }
        }
        max_count = max(max_count, count);

        return max_count;
    }
};


int main() {
    Solution sol;
    auto a = sol.lengthOfLongestSubstring("ghgfjgjgcmhgk");
    cout << a << endl;

}