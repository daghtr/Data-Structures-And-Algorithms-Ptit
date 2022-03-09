#include <bits/stdc++.h>
using namespace std;

int n, x, s = 0;
bool check = false;
int a[100];
vector<int> b;

void xu_ly()
{
    cout << "[";
    for(int i = 0 ; i < b.size()-1 ; i++)
        cout << b[i] << " ";
    cout << b[b.size()-1] << "]";
}

void tap_hop_so(int i)
{
    for(int j = 1 ; j <= n ; j++)
    {
        if(b.size() > 0  &&  a[j] < b.back())
            continue;
        if(s + a[j]  >  x)
            break;
        b.push_back(a[j]);

        s += a[j];

        if(s == x)
        {
            check = true;
            xu_ly();
        }

        else
            tap_hop_so(i+1);

        s -= a[j];
        b.pop_back();
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        check = false;
        b.clear();

        cin >> n >> x;
        for(int i = 1 ; i <= n ; i++)
            cin >> a[i];
        sort(a, a+n+1);

        tap_hop_so(1);

        if(!check)
            cout << "-1";
        cout << endl;
    }
    return 0;
}

//done
