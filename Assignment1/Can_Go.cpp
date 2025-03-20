#include <bits/stdc++.h>
using namespace std;

char a[1000][1000];
bool vis[1000][1000];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // Directions: right, left, up, down
int n, m;
bool foundB = false; 
bool valid(int i, int j) 
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

void dfs(int si, int sj) 
{
    if (a[si][sj] == '#' || vis[si][sj] || foundB)
    { 
        return; 
    }
    if (a[si][sj] == 'B') 
    { 
        foundB = true;
        return;
    }
    
    vis[si][sj] = true;
    
    for (int i = 0; i < 4; i++) 
    {

        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj]) 
        {
            dfs(ci, cj);
        }
    }
}

int main() {
    cin >> n >> m;
    int startX = -1, startY = -1;

   
    for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'A') 
            {
                startX = i;
                startY = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));

    dfs(startX, startY);
    if (foundB) 
    {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
