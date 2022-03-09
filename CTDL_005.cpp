#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < a.size() ; i++)
        cin >> a[i];
    
    int m;
    cin >> m;
    for(int i = 0 ; i <= n-1 ; i++)
    {
        if(a[i] != m)
            cout << a[i] << " ";
    }
    return 0;
}

//done