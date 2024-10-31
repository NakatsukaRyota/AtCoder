#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    string s;

    cin >> s;

    // ループ変数 i を初期化
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
            ans++;
        else if (s[i] == '-') // - があった場合に減算
            ans--;
    }

    cout << ans << endl;

    return 0;
}
