#include <bits/stdc++.h>
using namespace std;

int digits(char c)
{
    return c-'0';
}

int sum(string s)
{
    int n = s.length();
    int sum_digits[n];
    sum_digits[0] = digits(s[0]);
    int t = sum_digits[0];
    for(int i = 1 ; i < n ; i++)
    {
        int num = digits(s[i]);
        sum_digits[i] = (i+1)*num + 10*sum_digits[i-1];
        t += sum_digits[i];
    }
    return t;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << sum(s) << endl;
    }
    return 0;
}

//false