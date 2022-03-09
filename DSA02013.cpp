#include <bits/stdc++.h>
using namespace std;

int n, p, s;
vector<int> a;
vector<int> v;
vector<vector<int> > res;

vector<bool> sieve()
{
    vector<bool> prime(201, true);
    prime[0] = prime[1] = false;
    for(int i = 2 ; i*i <= 200 ; i++)
        if(prime[i])
            for(int j = i*i ; j <= 200 ; j+=i)
                prime[j] = false;
    return prime;
}

void Try(int sum, int n, int s, int i)
{
    if(sum == s && v.size() == n)
    {
        res.push_back(v);
        return;
    }

    if(sum > s || i == a.size())
        return;

    v.push_back(a[i]);
    Try(sum+a[i], n, s, i+1);
    v.pop_back();
    Try(sum, n, s, i+1);
}

int main()
{
    int t;
    cin >> t;
    vector<bool> prime = sieve();
    while (t--)
    {
        res.clear();
        v.clear();
        a.clear();
        cin >> n >> p >> s;
        for(int i = p ; i <= s ; i++)
            if(prime[i])
                a.push_back(i);

        Try(0, n, s, 0);
        cout << res.size() << endl;

        for(int i = 0 ; i < res.size() ; i++)
        {
            for(int j = 0 ; j < res[i].size() ; j++)
                cout << res[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}