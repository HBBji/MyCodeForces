#include <bits/stdc++.h>

#define long long long
#define Integer_MAX_VALUE 0x7fffffff
#define Integer_MIN_VALUE 0x80000000
#define Long_MAX_VALUE 0x7fffffffffffffffL
#define Long_MIN_VALUE 0x8000000000000000L

using namespace std;

struct Solution
{
    void run()
    {
        int n, m;
        cin >> n >> m;

        int now_x, now_y;
        cin >> now_x >> now_y;

        int target_x, target_y;
        cin >> target_x >> target_y;

        int dx = 1;
        int dy = 1;

        int tm = 0;
        while (true)
        {
            if (now_x == target_x || now_y == target_y)
            {
                cout << tm << endl;
                break;
            }

            tm++;
            now_x += dx;
            now_y += dy;
            if (now_x == n + 1)
            {
                now_x = n - 1;
                dx = -1;
            }
            else if (now_x == 0)
            {
                now_x = 2;
                dx = 1;
            }
            if (now_y == m + 1)
            {
                now_y = m - 1;
                dy = -1;
            }
            else if (now_y == 0)
            {
                now_y = 2;
                dy = 1;
            }
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);

    Solution solution = Solution();

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solution.run();
    }
    return 0;
}