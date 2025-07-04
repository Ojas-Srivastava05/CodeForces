#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
      bool issafe(vector<vector<int>>&visited,vector<vector<int>>&maze,int x,int y,int n)
      {
          if(x<n && x>=0 && y>=0 && y<n && visited[x][y]==0 && maze[x][y]==1)
          {
              return true;
          }
          return false;
      }
      
      void solve(vector<vector<int>>& maze,int n,vector<vector<int>>&visited,int x,int y,vector<string>& ans,string path){
          
          //base case
          if(x==n-1&&y==n-1)
          {
              ans.push_back(path);
              return;
          }
          
          visited[x][y]=1;
          
          //left
          int newx=x;
          int newy=y-1;
          if(issafe(visited,maze,newx,newy,n))
          {
              path.push_back('L');
              solve(maze,n,visited,newx,newy,ans,path);
              path.pop_back();
          }
          
          //right
          newx=x;
          newy=y+1;
          if(issafe(visited,maze,newx,newy,n))
          {
              path.push_back('R');
              solve(maze,n,visited,newx,newy,ans,path);
              path.pop_back();
          }
          
          //down
          newx=x+1;
          newy=y;
          if(issafe(visited,maze,newx,newy,n))
          {
              path.push_back('D');
              solve(maze,n,visited,newx,newy,ans,path);
              path.pop_back();
          }
          
          //up
          
          newx=x-1;
          newy=y;
          if(issafe(visited,maze,newx,newy,n))
          {
              path.push_back('U');
              solve(maze,n,visited,newx,newy,ans,path);
              path.pop_back();
          }
          visited[x][y]=0;
          
      }
      vector<string> ratInMaze(vector<vector<int>>& maze) {
          // code here
          vector<string>ans;
          int n = maze.size();
          vector<vector<int>> visited(n, vector<int>(n, 0));
          int x=0;
          int y=0;
          if(maze[0][0]==0)
          {
              return ans;
          }
          string path="";
          solve(maze,n,visited,x,y,ans,path);
          sort(ans.begin(),ans.end());
          return ans;
          
      }
  };