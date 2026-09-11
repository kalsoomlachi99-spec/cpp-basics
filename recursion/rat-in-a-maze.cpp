#include <iostream>
#include <vector>
#include <string>
using namespace std;

void helper(vector<vector<int>>& mat, int r, int c, string path, vector<string>& ans, vector<vector<bool>>& vis) {
    int rows = mat.size();
    int cols = mat[0].size();

    // Boundary conditions, obstacle check, and visited check
    if (r < 0 || c < 0 || r >= rows || c >= cols || mat[r][c] == 0 || vis[r][c]) {
        return;
    }

    // Destination reached
    if (r == rows - 1 && c == cols - 1) {
        ans.push_back(path);
        return;
    }

    // Mark current cell as visited
    vis[r][c] = true;

    // Explore in alphabetical order: Down, Left, Right, Up
    helper(mat, r + 1, c, path + 'D', ans, vis); // Down
    helper(mat, r, c - 1, path + 'L', ans, vis); // Left
    helper(mat, r, c + 1, path + 'R', ans, vis); // Right
    helper(mat, r - 1, c, path + 'U', ans, vis); // Up

    // Backtrack
    vis[r][c] = false;
}

vector<string> findPath(vector<vector<int>>& mat) {
    int rows = mat.size();
    if (rows == 0 || mat[0].empty() || mat[0][0] == 0) return {};
    int cols = mat[0].size();

    vector<string> ans;
    vector<vector<bool>> vis(rows, vector<bool>(cols, false));
    helper(mat, 0, 0, "", ans, vis);

    return ans;
}

int main() {
    /*Rat in a maze*/
    // 3 x 4 maze example
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> ans = findPath(mat);

    cout << "The paths are: " << endl;
    if (ans.empty()) {
        cout << "No path found." << endl;
    } else {
        for (const string& p : ans) {
            cout << p << endl;
        }
    }

    return 0;
}
