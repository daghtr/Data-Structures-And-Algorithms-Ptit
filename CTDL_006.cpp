#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> a;
    for(int i = 0 ; i <= n-1 ; i++)
    {
        int m;
        cin >> m;
        if(a[m])
            continue;
        a[m]++;
        cout << m << " ";
    }
    cout << endl;
    return 0;
}

//done
//chua sub