#include<bits/stdc++.h>
using namespace std;

int V, E, a; 			//tap dinh va tap canh cua do thi
vector<vector<int> > ke;//danh sach ke cua do thi
bool chuaxet[1005];		//ghi nhan trang thai chua xet cu dinh


void BFS(int u)			//thuat toan BFS queue
{
	queue <int> q;
	q.push(u);
	chuaxet[u] = false;
	while(!q.empty())
	{
		int s = q.front();
		q.pop();
		cout << s<< " ";
		for(int i = 0 ; i < ke[s].size() ; i++)
		{
			if(chuaxet[ke[s][i]])
			{
				chuaxet[ke[s][i]] = false;
				q.push(ke[s][i]);
			}
		}
	}

}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ke.clear();
		cin >> V >> E >> a;		//doc so dinh va so canh cua do thi
								//a la dinh bat dau chay
		ke.resize(V+1);
		memset(chuaxet, true, sizeof chuaxet);

		for(int i = 1 ; i <= E ; i++)
		{
			int u, v;			//u, v la dinh dau,dinh cuoi cua canh
			cin >> u >> v;
			ke[u].push_back(v);	//them v vao ke(u)
			//ke[v].push_back(u);	//them u vao ke(v)  // bỏ
		}
		BFS(a);
		cout << endl;
	}
	return 0;
}

//done
