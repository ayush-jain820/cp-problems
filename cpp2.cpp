#include <bits/stdc++.h>

using namespace std;


int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

set<pair<int, int>> st1, st2;

int solution(int kx, int ky, int qx, int qy, int a, int b)
{
    int count =0;

    for (int j = 0; j < 4; j++)
    {

        st1.insert({kx + dx[j] * a, ky + dy[j] * b});
        st1.insert({kx + dx[j] * b, ky + dy[j] * a});
        st2.insert({qx + dx[j] * a, qy + dy[j] * b});
        st2.insert({qx + dx[j] * b, qy + dy[j] * a});
    }

    for (auto x : st1)
    {
        if (st2.find(x) != st2.end())
        {
            count++;
        }
    }

    return count;
}



int main()
{
    int ans =0;
    int t;
    cin >> t;

    while (t--)
    {
        st1.clear();
        st2.clear();

        int qx, qy;
        int kx, ky;
        int a, b;

        cin >> a >> b;
        cin >> kx >> ky;
        cin >> qx >> qy;

        int ans = solution(kx, ky, qx, qy, a, b);

        cout << "ans is "<< ans << "\n";
    }

    return 0;
}