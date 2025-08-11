#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int expand(string s, int left, int right)
    {
        while (left >= 0 && right < (int)s.length() && s[left] == s[right])
        {
            left--;
            right++;
        }
        return right - left + 1 - 2;
    }
    string longestPalindrome(string s)
    {
        int left = 0;
        int maxlen = 1;
        for (int i = 0; i < (int)s.length(); ++i)
        {
            int len1 = expand(s, i, i);
            int len2 = expand(s, i, i + 1);
            int len = max(len1, len2);
            if (len > maxlen)
            {
                left = i - (len - 1) / 2;
                maxlen = len;
            }
        }
        return s.substr(left, maxlen);
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