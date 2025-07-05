#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "hello";
    int j = 0; // pointer to target

    for (char ch : s) {
        if (ch == target[j]) {
            j++;
        }
        if (j == target.size()) break; // found the full subsequence
    }

    if (j == target.size())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}