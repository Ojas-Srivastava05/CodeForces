#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        unordered_map<int, int> date;
        int n;
        cin >> n;
        vector<int> vals(n);
        for (int i = 0; i < n; i++) {
            cin >> vals[i];
        }

        int count = 0;
        bool found = false;

        for (int i = 0; i < n; i++) {

            // Only update frequencies if still needed
            if (vals[i] == 0 && date[0] < 3) {
                date[0]++;
            } else if (vals[i] == 1 && date[1] < 2) {
                date[1]++;
            } else if (vals[i] == 2 && date[2] < 1) {
                date[2]++;
            } else if (vals[i] == 3 && date[3] < 1) {
                date[3]++;
            } else if (vals[i] == 5 && date[5] < 1) {
                date[5]++;
            }

            // Check if all required digits are collected
            if (date[0] == 3 && date[1] == 2 && date[2] == 1 &&
                date[3] == 1 && date[5] == 1) {
                cout << count << endl;
                found = true;
            }
            if(found==false)
            {
                count++;
            }
            if(found==true)
            {
                break;
            }
        }

        if (!found) {
            cout << 0 << endl;
        }
    }

    return 0;
}