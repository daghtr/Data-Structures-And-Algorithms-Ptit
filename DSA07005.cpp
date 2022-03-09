#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<char> ngoac;
        ngoac.push('+');
        for(int i = 0 ; s[i] ; i++)
        {
            if(s[i] == '-')
            {
                if(ngoac.top() == '+')
                    cout << '-';
                else
                    cout << '+';
            }
            else if(s[i] == '+')
            {
                if(ngoac.top() == '-')
                    cout << '-';
                else
                    cout << '+';
            }
            else if(s[i] == '(')
            {
                if(i > 0  &&  s[i-1] == '-')
                {
                    if(ngoac.top() == '+')
                        ngoac.push('-');
                    else
                        ngoac.push('+');
                }

            }
            else if(s[i] == ')')
                ngoac.pop();
            else
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}

//done
