#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 7;
const int MXN = 1e5 + 7;

vector<int> g[MXN];
vector<int> ts;

int n, m;
int u[MXN];

void dfs(int v)
{
    u[v] = 1;
    for (int i = 0; i < g[v].size(); i++)
    {
        int to = g[v][i];
        if (u[to] == 0)
            dfs(to);

        if (u[to] == 1)
        {
            printf("-1");
            exit(0);
        }
    }
    u[v] = 2;
    ts.push_back(v);
}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);

        g[a].push_back(b);
    }

    for (int i = 1; i <= n; i++)
        if (!u[i])
            dfs(i);

    reverse(ts.begin(), ts.end());
    for (int i = 0; i < ts.size(); i++)
        printf("%d ", ts[i]);

    return 0;
}
