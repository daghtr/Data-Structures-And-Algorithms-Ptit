#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> stk;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == '(')
                stk.push(i);
            else
            {
                if(!stk.empty()  &&  s[stk.top()] == '(')
                    stk.pop();
                else
                    stk.push(i);
            }
        }
        cout << s.length() - stk.size();
        cout << endl;
    }
    return 0;
    
}
//done