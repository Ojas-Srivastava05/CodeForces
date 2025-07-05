#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> coord(n, vector<int>(3));

    // Reading input
    for(int i = 0; i < n; i++) {
        cin >> coord[i][0] >> coord[i][1] >> coord[i][2];
    }

    int sumX = 0, sumY = 0, sumZ = 0;

    // Summing each component
    for(int i = 0; i < n; i++) {
        sumX += coord[i][0];
        sumY += coord[i][1];
        sumZ += coord[i][2];
    }

    // Checking if the body is in equilibrium
    if(sumX == 0 && sumY == 0 && sumZ == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}