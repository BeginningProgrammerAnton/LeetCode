#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == '(') {
                st.push(')');
                continue;
            }
            if (s[i] == '{') {
                st.push('}');
                continue;
            }
            if (s[i] == '[') {
                st.push(']');
                continue;
            }
            if (st.empty()) {
                return false;
            }
            if (s[i] == st.top()) {
                st.pop();
                continue;
            }
            else {
                return false;
            }

        }
        if (st.empty()) {
            return true;
        }
        return false;
    }
};

int main() {
    Solution sol;
    cout << sol.isValid("(])");


}