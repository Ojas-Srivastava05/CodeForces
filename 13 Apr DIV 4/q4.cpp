#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        string p;
        cin >> p;
        string s;
        cin >> s;

        int j = 0, k = 0;
        bool ok = true;

        while (j < p.size() && k < s.size()) {
            char ch = p[j];
            if (s[k] != ch) {
                ok = false;
                break;
            }
            int cnt = 0;
            while (k < s.size() && s[k] == ch) {
                k++;
                cnt++;
            }
            
            if (cnt < 1) {
                ok = false;
                break;
            }
            j++;
        }

        
        if (j != p.size() || k != s.size()) {
            ok = false;
        }

        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}