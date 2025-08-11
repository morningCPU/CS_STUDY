#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double avg = 0;
    vector<int> data;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        data.push_back(temp);
        avg += (double)temp / n;
    }
    cout << *min_element(data.begin(), data.end()) << '\n';
    cout << *max_element(data.begin(), data.end()) << '\n';
    cout << avg;
    return 0;
}