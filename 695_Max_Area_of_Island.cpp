#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid){
        int count = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    count = max(count, DFS(grid, i , j));
                }
            }
        }
        return count; 
    }

private:
    int DFS(vector<vector<int>>& grid, int i , int j){
        int count = 1;
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0){
            return 0;
        }
        grid[i][j] = 0;
        count += DFS(grid, i - 1, j);
        count += DFS(grid, i + 1, j);
        count += DFS(grid, i,     j - 1);
        count += DFS(grid, i,     j + 1);
        return count;
    }
   
};

/* a = 
0 0 1
0 0 0
0 1 1
0 1 0
0 1 0
0 0 0
*/

int main(){
    Solution s1;
    vector<vector<int>> a = {{0,0,1},{0,0,0},{0,1,1},{0,1,0},{0,1,0}, {0,0,0}};
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < a[0].size(); j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << s1.maxAreaOfIsland(a)<< endl;
    return 0;
}