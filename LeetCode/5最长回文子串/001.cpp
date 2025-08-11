#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
        {
            dp[i][i] = true;
        }
        int left = 0, right = 0;
        for (int L = 2; L <= n; ++L)
        {
            for (int i = 0; i < n; ++i)
            {
                int j = i + L - 1;
                if (j >= n)
                    break;
                if (s[i] == s[j])
                {
                    if (L == 2)
                    {
                        dp[i][j] = true;
                    }
                    else
                    {
                        dp[i][j] = dp[i + 1][j - 1];
                    }
                }
                else
                {
                    dp[i][j] = false;
                }
                if (dp[i][j] && L > right - left + 1)
                {
                    left = i;
                    right = i + L - 1;
                }
            }
        }
        return s.substr(left, right - left + 1);
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