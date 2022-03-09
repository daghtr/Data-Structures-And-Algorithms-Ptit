#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n;
        int a[n], b[n], c[n];
        for(int i = 0 ; i < n ; i++)
            cin >> a[i];

        b[0] = a[0];
        c[0] = {0};
        for(int  i = 1 ; i < n ; i++)
        {
            b[i] = c[i-1] + a[i];
            c[i] = max(b[i-1], c[i-1]);
        }

        cout << max(b[n-1], c[n-1]) << endl;
    }
    return 0;
}

//done
