#include<iostream>
using namespace std;
#include<vector>
void isSafe(int newx, int newy, vector<bool>> &vis, vector<vector<int>> & arr, int n){
    if((newx >=0 && newx<n ) && (newy >=0 && newy<n) && vis[newx][newy]!=1 && arr[newx][newy] == 1){
        return true;
    }
    else{
        return false;
    }
}
void solve(int x, int y, vector<vector<int>> & arr, int n, vector<string> & ans, vector<vector<bool>> &vis, string path){
    //base case
    if(x == n-1 && y== n-1){
        ans.push_back(path);
    }
    // 4 movement
    //D, L,R, U
    //Down
    vis[x][y] = 1;
    if(isSafe(x+1, y, vis, arr, n)){
        
        solve(x+1, y, arr, n, ans, vis, path+ 'D');
    }
    //Left
    if(isSafe(x+1, y-1, vis, arr, n)){

        solve(x+1, y, arr, n, ans, vis, path+ 'D');
    }
    //right
    if(isSafe(x, y+1, vis, arr, n)){
        solve(x+1, y, arr, n, ans, vis, path+ 'D');
    }
    //up
    if(isSafe(x-1, y, vis, arr, n)){
        solve(x+1, y, arr, n, ans, vis, path+ 'D');
    }
    vis[x][y] = 0;
}
vector <string>  searchMaze(vector <vector<int> > & arr, int n){
    vector<string> ans;
    vector <vector< bool> > visited (n, vector<bool> (n,0));
    string path = "";
    solve(0, 0, arr, n, ans, visited, path);
    return ans;
}
int main(){}  