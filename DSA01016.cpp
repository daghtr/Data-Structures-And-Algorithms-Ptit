#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], ok = 1;

void nhap()
{
    cin >> n;
    k = 1;
    a[k] = n;
}

void phan_tich_so()
{
    cout << "(";
    for(int i = 1 ; i < k ; i++)
            cout << a[i] << " ";
    cout << a[k] << ") ";
}

void kt()
{
    int i = k ;
    int R, S, D;
    while(i > 0  &&  a[i] == 1)
        i--;

    if(i > 0)
    {
        a[i] = a[i] - 1;
        D = k - i + 1;
        S = D % a[i];
        R = D / a[i];
        k = i;
        if(R > 0)
        {
            for(int j = i+1 ; j <= i+R ; j++)
                a[j] = a[i];
            k = k + R;

        }

        if(S > 0)
        {
            k = k + 1;
            a[k] = S;
        }
    }

    else
        ok = 0;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        nhap();
        ok = 1;
        while(ok)
        {
            phan_tich_so();
            kt();
        }
        cout << endl;
    }
    return 0;
}

//done
