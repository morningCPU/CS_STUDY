#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int expand(string s, int left, int right)
    {
        while (left >= 0 && right < s.length() && s[left] == s[right])
        {
            left--;
            right++;
        }
        return (right - left - 1) / 2;
    }
    string longestPalindrome(string s)
    {
        string tmp;
        tmp += '#';
        for (const auto &i : s)
        {
            tmp += i;
            tmp += '#';
        }
        s = tmp;
        vector<int> len;
        int left = 0;
        int maxlen = 1;
        int C = -1;
        int right = -1;
        for (int i = 0; i < s.length(); ++i)
        {
            int arm;
            if (i <= right)
            {
                arm = min(right - i, len[2 * C - i]);
                arm = expand(s, i - arm, i + arm);
            }
            else
            {
                arm = expand(s, i, i);
            }
            len.push_back(arm);
            if (i + arm > right)
            {
                C = i;
                right = i + arm;
            }
            if (2 * arm + 1 > maxlen)
            {
                left = i - arm;
                maxlen = 2 * arm + 1;
            }
        }
        string ans;
        for (int i = left; i < left + maxlen; ++i)
        {
            if (s[i] != '#')
            {
                ans += s[i];
            }
        }
        return ans;
    }
};

int main()
{
    string s;
    cin >> s;
    Solution solution;
    cout << solution.longestPalindrome(s);
    return 0;
}