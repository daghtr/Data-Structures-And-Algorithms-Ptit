#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long n;
        cin >> n;
        vector<long long> a(n);

        for(int i = 0 ; i < a.size() ; i++)
            cin >> a[i];
        
        vector<bool> check(n+5, false);
        sort(a.begin(), a.end());
        long long m = n/2;
        long long k = n-1;
        long long b = k;
        long long s = 0;
        while(b >= 0  && k >= 0)
        {
            if(a[b] <= a[k]/2)
            {
                s++;
                b--;
                k--;
            }
            else
                b--;
        }

        s >= n/2 ? cout << n/2 : cout << n-s;
        cout << endl;
    }
    return 0;
}

//done