#include <bits/stdc++.h>
using namespace std;


int exp(string s) 
{  
    stack<int> stk; 
    for (int i = 0 ; i < s.length() ; i++) 
    { 
        if (s[i] == '(') 
            stk.push(i); 
        else 
        { 
            if (!stk.empty()  &&  s[stk.top()] == '(') 
                stk.pop(); 
            else
                stk.push(i); 
        } 
    } 
    return s.length() - stk.size(); 
} 

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << exp(s);
        cout << endl;
    }
    return 0;
}
