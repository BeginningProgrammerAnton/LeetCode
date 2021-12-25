#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> multiply(vector<string> res,string s) {
    string cur;
    string a;
    string b;
    vector<string> cur_vec;
    for (size_t i = 0; i < s.length(); i++)
    {
        for (size_t j = 0; j < res.size(); j++)
        {
            a.push_back(s[i]);
            cur_vec.push_back(res[j] + a);
            a.clear();
        }

    }
    return cur_vec;

}

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> map;

        vector <string> res;
        map['2'] = {"abc"};
        map['3'] = { "def" };
        map['4'] = { "ghi" };
        map['5'] = { "jkl" };
        map['6'] = { "mno"};
        map['7'] = { "pqrs"};
        map['8'] = { "tuv" };
        map['9'] = {"wxyz"};
        string cur_str = map[digits[0]];
        string a;
        for (size_t i = 0; i < cur_str.length(); i++)
        {
            a.push_back(cur_str[i]);
            res.push_back(a);
            a.clear();
        }

        for (size_t i = 1; i < digits.length(); i++)
        {
            res = multiply(res, map[digits[i]]);
        }
        return res;
    }

   
};

int main()
{
    Solution sol;
    sol.letterCombinations("2");
    std::cout << "Hello World!\n";
}


