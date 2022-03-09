// tinh luy thua

#include<bits/stdc++.h>
using namespace std;


long long modulo = 1e9+7;
int n,k;
long long pow(int n, int k)
{
    if(k == 0)
        return 1;
    // tinh luy thua tren mot nua
    long long x = pow(n, k/2);			//pow() -> ham tinh luy thuy
    if(k % 2 == 0)
        return x * x % modulo;
    return n * (x * x % modulo) % modulo;
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << pow(n,k) << endl;
    }
}

//done

