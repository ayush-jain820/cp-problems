#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, l, k, r;

    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> ps(n);

    ps[0] = v[0];
    for (int i = 1; i < n; i++)
    {

        ps[i] = v[i] + ps[i - 1];
    }

    cout << "enter the value of l r &k";

    cin >> l >> r >> k;

    int left = (l > 0 ? ps[l - 1] : 0);
    int mid = (r - l + 1) * k;
    int right = (r < n - 1 ? ps[n - 1] - ps[r] : 0);

    int ans = left + mid + right;

    if (ans % 2 == 0)
        cout << "NO" << endl;

    else
    {
        cout << "YES" << endl;
    }
}