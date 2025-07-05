#include<iostream>
using namespace std;

int main()
{
    string st;
    getline(cin, st);

    int count = 1; // count the current run, starts with 1 since first char exists

    for(int i = 1; i < st.size(); i++)
    {
        if(st[i] == st[i - 1])
        {
            count++;
            if(count >= 7)
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            count = 1; // reset count
        }
    }

    cout << "NO";
    return 0;
}