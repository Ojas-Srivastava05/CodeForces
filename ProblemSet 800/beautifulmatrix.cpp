#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int findi=0;
    int findj=0;
    int flag=0;
    vector<vector<int>> matrix(5,vector<int>(5,0));
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j]==1)
            {
                findi=i+1;
                findj=j+1;
                flag=1;
                break;
            }
            if(flag==1)
            {
             break;
            }

        }

    }
    cout<<abs(3-findi)+abs(3-findj);
    return 0;

}