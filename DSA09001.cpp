#include<bits/stdc++.h>
using namespace std;

int V, E, u, v;
vector<vector<int> > k;

int main(){
	int t;
	cin >> t;
	while(t--){
		k.clear();			// lam rong danh sach(loai bo tat ca cac phan tu trong vector)
		cin >> V >> E;
		k.resize(V+1);		// thay doi kich thuoc cua danh sach
		for(int i = 0 ; i < E ; i++){
			cin >> u >> v;
			k[u].push_back(v);
			k[v].push_back(u);
		}
		for(int i = 1 ; i <= V ; i++){
			cout << i << ":";
			sort(k[i].begin(), k[i].end());
			for(int j = 0 ; j < k[i].size() ; j++)
				cout << " " << k[i][j];
				
				
			cout << endl;
		}
	}
	return 0;
}

// done
