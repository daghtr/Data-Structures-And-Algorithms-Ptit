#include<bits/stdc++.h>
using namespace std;

int V, E, a, b; 			//tap dinh va tap canh cua do thi		
vector<vector<int> > ke;    //danh sach ke cua do thi				
bool chuaxet[1005];		    //ghi nhan trang thai chua xet cu dinh
int first[1005];

void BFS(int u)			    //thuat toan BFS stack
{
	queue <int> q;
	q.push(u);
	chuaxet[u] = false;

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

void tim_duong(int a, int b)
{
    if(first[b] != 0)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ke.clear();
		cin >> V >> E;		    //doc so dinh va so canh cua do thi
		ke.resize(V+1);


		for(int i = 1 ; i <= E ; i++)
		{
			int u, v;			//u, v la dinh dau,dinh cuoi cua canh
			cin >> u >> v;
			ke[u].push_back(v);	//them v vao ke(u)
			ke[v].push_back(u);	//them u vao ke(v)
		}

		int q;
		cin >> q;
		while(q--)
        {
            cin >> a >> b;
            memset(chuaxet, true, sizeof chuaxet);
            memset(first, 0, sizeof first);

            BFS(a);
            tim_duong(a,b);
            cout << endl;
        }


	}
	return 0;
}

//done
