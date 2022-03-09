#include<bits/stdc++.h>
using namespace std;

int a[100], n, k;
// ham kiem tra co la tap con dau tien hay khong
bool check()
{

    for(int i = 1 ; i <= k ; i++)       //<=> i < k : TH nay thoi gian it hon
    {
        if(a[i] != i)
            return 0;
    }
    return 1;
}

void tap_con()
{
    // neu la tap con dau tien, thi in ra tap con cuoi cung
    if(check())
    {
        for(int i = 1 ; i <= k ; i++)
            a[i] = n - k + i;
    }
    else
    {
        int i = k;
        // tim vi tri a[i] - a[i-1] != 1
        while( a[i] - a[i-1] == 1)
            i--;

        a[i] = a[i] - 1;
         // gan nhung vi tri tu i+1 toi k bang gia tri toi han
        for(int j = i+1; j <= k ; j++)
            a[j] = n-k+j;
    }

    for(int m = 1 ; m <= k ; m++)
        cout << a[m] << " ";
    cout << endl;
}

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 1 ; i <= k ; i++)
            cin >> a[i];
        tap_con();
    }
    return 0;
}

//done
