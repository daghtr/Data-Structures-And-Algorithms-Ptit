// BFS
#include <bits/stdc++.h>
using namespace std;

int V, E, u , v;
bool chua_xet[1005];
vector<vector<int> > ke;

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    chua_xet[u] = false;
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for(int i = 0 ; i < ke[s].size(); i++)
        {
            if(chua_xet[ke[s][i]])
            {
                chua_xet[ke[s][i]] = false;
                q.push(ke[s][i]);
            }
        }
    }
    
}

int connection_components()
{
    int count = 0;
    for(int u = 1 ; u <= V ; u++)
    {
        if(chua_xet[u])
        {
            count++;
            BFS(u);
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ke.clear();
        cin >> V >> E;
        ke.resize(V+5);
        memset(chua_xet, true, sizeof(chua_xet));
        for(int i = 1; i <= E; i++)
        {
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        cout << connection_components() << endl;
    }
    return 0;
    
}