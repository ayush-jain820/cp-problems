#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;

        cout << "enter the value of string" << endl;
        cin >> s;

        int n = s.length();
        int cnt = 1;

        int ans = INT_MIN;

        for (int i = 0; i < n - 1; i++)
        {

            if (s[i] == s[i + 1])
            {
                cnt++;
            }
            else
            {

                cnt = 1;
            }

            ans = max(ans, cnt);
        }
        cout << " ans is " << ans + 1 << endl;
    }
}
