#include<iostream>
using namespace std;
#include<vector>
void solve(int col, vector<vector<int>> & ans, vector<vector<int>> & board, int n){
    //base case
    if(col == n){
        addSolution(board, ans);
        return ;
    }
}
vector<vector<int>>nQueens(int n){
    vector<vector<int>>board(n, vector(n,0));
    vector<vector<int>>ans;
    solve(0, ans, board);
    return ans;
}
int main(){}