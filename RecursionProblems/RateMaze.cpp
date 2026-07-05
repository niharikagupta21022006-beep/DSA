#include <bits/stdc++.h>
using namespace std;

void solve(int row, int col, vector<vector<int>> &maze, int n, string path, vector<string> &ans, vector<vector<int>> &vis)
{
    if (row == n - 1 && col == n - 1)
    {
        ans.push_back(path);
        return;
    }

    if (row + 1 < n && maze[row + 1][col] == 1 && vis[row + 1][col] == 0)
    {
        vis[row][col] = 1;
        solve(row + 1, col, maze, n, path + 'D', ans, vis);
        vis[row + 1][col] = 0;
    }

    if (row - 1 >= 0 && maze[row - 1][col] == 1 && vis[row - 1][col] == 0)
    {
        vis[row][col] = 1;
        solve(row - 1, col, maze, n, path + 'U', ans, vis);
        vis[row - 1][col] = 0;
    }

    if (col + 1 < n && maze[row][col + 1] == 1 && vis[row][col + 1] == 0)
    {
        vis[row][col] = 1;
        solve(row, col + 1, maze, n, path + 'R', ans, vis);
        vis[row][col + 1] = 0;
    }

    if (col - 1 >= 0 && maze[row][col - 1]==1 && vis[row][col - 1]==0)
    {
        vis[row][col] = 1;
        solve(row, col - 1, maze, n, path + 'L', ans, vis);
        vis[row][col - 1] = 0;
    }
}

vector<string> findPath(vector<vector<int>> maze, int n)
{
    vector<string> ans;

    if (maze[0][0] == 0)
    {
        return ans;
    }

    vector<vector<int>> vis(n, vector<int>(n, 0));
    solve(0, 0, maze, n, "", ans, vis);
    return ans;
}

int main()
{

    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1},
    };

    int n = maze.size();

    vector<string> ans = findPath(maze, n);

    for (string path : ans)
    {
        cout << path << endl;
    }
    return 0;
}
