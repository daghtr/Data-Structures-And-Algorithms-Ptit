#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        vector<vector<long long> > c(a, vector<long long> (b));
        for(int i = 0 ; i < c.size() ; i++)
            for(int j = 0 ; j < c[i].size() ; j++)
                cin >> c[i][j];

        vector<vector<long long> > d(a, vector<long long> (b));
        d[0][0] = c[0][0];
        for(int i = 1 ; i <= b-1 ; i++)
            d[0][i] = d[0][i-1] + c[0][i];
        for(int i = 1 ; i <= a-1 ; i++)
            d[1][0] = d[i-1][0] + c[i][0];
        for(int i = 1 ; i <= a-1 ; i++)
        {
            for(int j = 1 ; j <= b-1 ; j++)
                d[i][j] = min(d[i-1][j] + c[i][j], min(d[i][j-1] + c[i][j], d[i-1][j-1] +c[i][j]));
        }

        cout << d[a-1][b-1] << endl;
    }
    return 0;
}

//chua sub