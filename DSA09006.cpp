#include<bits/stdc++.h>
using namespace std;

int V, E, a, b; 			//tap dinh va tap canh cua do thi
vector<vector<int> > ke;    //danh sach ke cua do thi
bool chuaxet[1005];		    //ghi nhan trang thai chua xet cu dinh
int first[1005];

void DFS(int u)			    //thuat toan DFS stack
{
	stack <int> stk;
	stk.push(u);
	chuaxet[u] = false;
	//cout << u << " ";     //bỏ k cần sử dụng
	while(!stk.empty())
	{
		int s = stk.top();
		stk.pop();
		for(int i = 0 ; i < ke[s].size() ; i++)
		{
			if(chuaxet[ke[s][i]])
			{
				//cout << ke[s][i] << " ";  //bỏ k cần sử dụng
				first[ke[s][i]] = s;
				chuaxet[ke[s][i]] = false;
				stk.push(s);
				stk.push(ke[s][i]);
				break;
			}
		}
	}

}

void tim(int a, int b)
{
    stack<int> c;
    if(first[b] == 0)
        cout << "-1";
    else
    {
        c.push(b);
        int u = first[b];
        while(u != a)
        {
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
		cin >> V >> E >> a >> b;		//doc so dinh va so canh cua do thi
								//a la dinh bat dau chay
		ke.resize(V+1);
		memset(chuaxet, true, sizeof chuaxet);
        memset(first, 0, sizeof first);

		for(int i = 1 ; i <= E ; i++)
		{
			int u, v;			//u, v la dinh dau,dinh cuoi cua canh
			cin >> u >> v;
			ke[u].push_back(v);	//them v vao ke(u)
			ke[v].push_back(u);	//them u vao ke(v)
		}
		DFS(a);
		tim(a,b);
		cout << endl;
	}
	return 0;
}

//done
