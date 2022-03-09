#include <bits/stdc++.h>
using namespace std;

int n, k, dem = 0;
int a[100];

void nhap()
{
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];
}

void xu_ly(int i, int k, int cnt)
{
    if(k == cnt)
        dem++;
    else
    {
        for(int j = i+1 ; j <= n ; j++)
        {
            if(a[i] < a[j])
                xu_ly(j, k, cnt+1);
            else
                continue;
        }
    }
}

void day_con()
{
    dem = 0;
    for(int i = 1 ; i <= n ; i++)
        xu_ly(i,k,1);

    cout << dem;
}
int main()
{
    cin >> n >> k;
    nhap();
    day_con();
    return 0;
}

//done
