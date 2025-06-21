#include<iostream>
#include<vector>
using namespace std;
vector<string> convertor(int t)
{
    vector<string>results;
    cin.ignore();
    for(int i=0;i<t;i++)
    {
        string str;
        getline(cin,str);
        string acro="";
        if(!str.empty())
        {
            acro+=str[0];
        }
        for (int j = 1; j < str.length(); j++) {
            if (str[j - 1] == ' ' && str[j] != ' ') {
                acro += str[j];
            }
        }
        results.push_back(acro);
    }
    return results;
}
int main()
{
    int t;
    cin>>t;
    vector<string> acro = convertor(t);
    for (string ac : acro) {
        cout << ac << endl;
    }
    return 0;
}