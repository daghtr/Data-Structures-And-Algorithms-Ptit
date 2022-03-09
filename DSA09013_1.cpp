// BFS
#include<bits/stdc++.h>
using namespace std;

int u, v, V, E;
bool chua_xet[1005];
int a[1005][1005];
vector<vector<int> > ke;
vector<int> f;		// first : dau
vector<int> e;		// end : cuoi


void nhap()
{
	memset(chua_xet, true, sizeof(chua_xet));
}

void BFS(int u)
{
    queue<int> q;	
	q.push(u);
	chua_xet[u] = false;

	while(!q.empty())
    {
		int s = q.front(); 
		q.pop();
		for(int i = 0; i < ke[s].size(); i++)
        {
			if(chua_xet[ke[s][i]]  &&  a[s][ke[s][i]])
            {
				chua_xet[ke[s][i]] = false;
				q.push(ke[s][i]);
			}
		}
	}
}

bool check(){
	for(int u = 1; u <= V; u++)
		if(chua_xet[u])
            return true;
	return false;
}

void canh_cau()
{
	nhap();
	for(int u = 1; u <= V; u++)
		for(int i = 0; i < ke[u].size(); i++)
        {
			int v = ke[u][i];
			if(u < v)
            {
				a[u][v] = 0;
				a[v][u] = 0;
				BFS(1);
				if(check())
                {
					f.push_back(u);
					e.push_back(v);
				}
				a[u][v] = 1;
				a[v][u] = 1;
				nhap();
			}
		}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
    {
		f.clear();
		e.clear();
		ke.clear();
		cin >> V >> E;
		ke.resize(V+5);
		memset(chua_xet, true, sizeof(chua_xet));
		memset(a, 0, sizeof (a));
		for(int i = 1; i <= E; i++)
        {
			cin >> u >> v;
			ke[u].push_back(v);
			ke[v].push_back(u);
			a[u][v] = 1;
			a[v][u] = 1;
		}
		canh_cau();
		for(int i = 0; i < f.size(); i++)
			cout << f[i] << " " << e[i] << " ";
		cout << endl;
	}
	return 0;
}

//chua sub