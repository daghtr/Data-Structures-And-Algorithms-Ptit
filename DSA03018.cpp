#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int so_4 = 0;
        int so_7 = 0;
        while(1)
        {
            if(n % 7 == 0)
            {
                so_7 += n/7;
                n = 0;
                break;
            }

            if(n > 4)   //<=> n >= 4
            {
                n -= 4;
                so_4++;
            }

            if(n < 4)
                break;
        }

        if(n == 0)
        {
            if(so_4 != 0)
            {
                for(int i = 1 ; i <= so_4 ; i++)
                    cout << "4";
            }
            if(so_7 != 0)
            {
                for(int i = 1 ; i <= so_7 ; i++)
                    cout << "7";
            }
        }
        else
            cout << "-1";
        cout << endl;
    }
    return 0;
}

//done
