#include <bits/stdc++.h>
using namespace std;

vector<long long> a(100001, 0);
void convert()
{
    a[1] = 0;
    a[2] = 1;
    a[3] = 1;
    for(int i = 2 ; i <= 100000 ; i++)
    {
        if(a[i] == 0 || a[i] > a[i-1]+1)
            a[i] = a[i-1] + 1;
        if(i*2 <= 100000  &&  (a[i*2] == 0 || a[i*2] > a[i]+1))
            a[i*2] = a[i] + 1;
        if(i*3 < 100000  &&  (a[i*3] == 0 || a[i*3] > a[i]+1))
            a[i*3] = a[i] + 1;
    }
}

int main()
{
    convert();
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}

//chua sub