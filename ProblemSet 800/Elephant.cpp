#include<iostream>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    int steps = t / 5;
    if (t % 5 != 0)
        steps++;
    cout << steps;
    return 0;
}