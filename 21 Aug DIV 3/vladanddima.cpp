#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore(); // ignore leftover '\n'
        string a;
        getline(cin, a);

        int m;
        cin >> m;
        cin.ignore();
        string b;
        getline(cin, b);

        string c;
        getline(cin, c);
        int i=0;
        for (auto chance : c)
        {
            if (chance == 'D')
            {
                a = a + b[i];
            }
            else
            {
                a = b[i] + a;
            }
            i++;
        }
        cout << a << endl;
    }
    return 0;
}