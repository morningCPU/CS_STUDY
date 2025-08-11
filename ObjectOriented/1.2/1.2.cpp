#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.1415926535897932384626433
using namespace std;
int main()
{
    double x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double area;
    if (d >= r1 + r2)
    {
        area = 0.0;
    }
    else
    {
        if (d <= abs(r1 - r2))
        {
            double tmp = min(r1, r2);
            area = PI * tmp * tmp;
        }
        else
        {
            area = (r1 * r1 * acos((d * d + r1 * r1 - r2 * r2) / (2 * d * r1)) + r2 * r2 * acos((d * d + r2 * r2 - r1 * r1) / (2 * d * r2)) - 0.5 * sqrt((-d + r1 + r2) * (d + r1 - r2) * (d - r1 + r2) * (d + r1 + r2)));
        }
    }
    cout << fixed << setprecision(3) << area << endl;
    return 0;
}