#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a = "";
        string b = "";
        while(a == "")
            getline(cin, a);
        while(b == "")
            getline(cin, b);

        long long x = 0;
        long long c[10005];
        memset(c, 0, sizeof c);

        long long s1 = 0, s2 = 0;
        for(int i = 0 ; i <= a.length()-1 ; i++)
        {
            if(!isdigit(a[i]))
            {
                if(x == 1)
                {
                    c[s2] += s1;
                    s2 = 0;
                    s1 = 0;
                }
                continue;
            }

            if(i > 0  &&  !isdigit(a[i-1]))
                x = 1 - x;
            
            if(x == 0)
                s1 = s1*10 + a[i] - '0';
            else
                s2 = s2*10 + a[i] - '0';
        }

        if(s1)
            c[s2] += s1;
        
        x = 0;
        s1 = 0;
        s2 = 0;

        for(int i = 0 ; i <= b.length()-1 ; i++)
        {
            if(!isdigit(b[i]))
            {
                if(x == 1)
                {
                    c[s2] += s1;
                    s2 = 0;
                    s1 = 0;
                }
                continue;
            }
            if(i > 0  &&  !isdigit(b[i-1]))
                x = 1 - x;
                
            if(x == 0)
                s1 = s1*10 + b[i] - '0';
            else   
                s2 = s2*10 + b[i] - '0';
        }

        if(s1)
            c[s2] += s1;

        long long k;
        for(int i = 10000 ; i >= 0 ; i--)
        {
            if(c[i])
            {
                cout << c[i] << "*x" << i;
                k = i;
                break;
            }
        }

        for(int i = k-1 ; i >= 0 ; i--)
        {
            if(c[i])
            {
                cout << " " << "+" << " " << c[i] << "*x^" << i;
                k = i;
            }
        }

        cout << endl;


    }
    return 0;
}

//chua sub