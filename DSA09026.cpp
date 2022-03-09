#include<bits/stdc++.h>
using namespace std;

int V, E, a, b;
bool chuaxet[1005];
int first[1005];
vector<vector<int> > ke;


void BFS(int u)
{
    queue<int> q;
	q.push(u);
	chuaxet[u]=false;

	while(!q.empty())
    {
		int s = q.front();
		q.pop();
		for(int i = 0 ; i < ke[s].size() ; i++)
		{
			if(chuaxet[ke[s][i]])
			{
				chuaxet[ke[s][i]] = false;
				q.push(ke[s][i]);
				first[ke[s][i]] = s;
			}
		}
	}
}

void tim(int a, int b)
{
	stack<int> c;
	if(first[b] == 0)
        cout<<"-1";
	else
	{
		c.push(b);
		int u = first[b];
		while(u != a){
			c.push(u);
			u = first[u];
		}
		c.push(a);
	}
	while(!c.empty())
	{
		cout << c.top() << " ";
		c.pop();
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
    {
		ke.clear();
		cin >> V >> E >> a >> b;
		ke.resize(V+1);

		memset(chuaxet, true, sizeof chuaxet);
		memset(first, 0, sizeof first);

		for(int i = 1 ; i <= E ; i++)
        {
            int u, v;
			cin >> u >> v;
			ke[u].push_back(v);
		}
		BFS(a);
		tim(a, b);
		cout << endl;
	}
	return 0;
}


//done