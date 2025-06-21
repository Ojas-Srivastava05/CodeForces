#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        cin>>str;
        if(str.size()<=10)
        {
            cout<<str<<endl;
        }
        else{
            char chs=str[0];
            char chl=str[str.size()-1];
            int l = str.size() - 2;
            cout<<chs<<l<<chl<<endl;
        }
    }
    return 0;

}
