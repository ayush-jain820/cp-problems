#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cout << "enter the value of a b &n" << endl;

        cin >> a >> b >> n;
        vector<int> v(n);

        while (n--)
        {
            int s;
            cin >> s;
            v.push_back(s);
        }
        
        int ans = b;

        for (int i = 0; i < v.size(); i++)
        {
           ans+= min(v[i],a-1);
        }
        cout<< "ans is " << ans;
    }
    return 0;
}