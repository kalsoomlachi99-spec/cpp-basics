#include <iostream>
#include <vector>
#include <string>
using namespace std;

void helper(vector <vector<int>>& mat, int r, int c, string path, vector<string>& ans, vector<vector<bool>>& vis){
    int n = mat.size();
    if(r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || vis[r][c]) {
        return;
    }

    if(r == n-1 && c == n-1) { // ans
        ans.push_back(path);
        return;
    }

    vis[r][c] = true;

    helper(mat, r-1, c, path + 'U', ans, vis); // Up
    helper(mat, r+1, c, path + 'D', ans, vis); // Down
    helper(mat, r, c-1, path + 'L', ans, vis); // Left
    helper(mat, r, c+1, path + 'R', ans, vis); // right

    vis[r][c] = false;
}

vector <string> findPath(vector <vector<int>>& mat) {
    int n= mat.size();

    vector<string> ans;
    string path = "";
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    helper(mat, 0, 0, path, ans, vis);

    return ans;
}

int main() {
    
    /*Rate in a Maze*/

    vector <vector <int>> mat = {{1,0,0,0}, {1,1,0,0}, {0,1,1,1}};

    cout << "The paths are: " << endl;
    vector<string> ans = findPath(mat);

    return 0;
}
