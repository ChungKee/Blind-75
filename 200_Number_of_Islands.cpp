#include <iostream>
#include <vector>

using namespace std;


class Solution{
public:
    int numIslands(vector<vector<char>> grid) {
        int count = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    count++;
                    DFS(grid, i, j);
                }
            }
        }

        return count;
    }

    void DFS(vector<vector<char>>& grid, int i, int j){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != '1'){
            return;
        }
        
        grid[i][j] = '0';
        DFS(grid, i - 1, j);
        DFS(grid, i + 1, j);
        DFS(grid, i,     j - 1);
        DFS(grid, i,     j + 1);
    }

};


int main(){
    vector<vector<char>> a = {{'1','1','0','0','0'},
                              {'1','1','0','0','0'},
                              {'0','0','1','0','0'},
                              {'0','0','0','1','1'}};
    Solution s1;
    cout << s1.numIslands(a) << endl;
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < a[0].size(); j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}