//so loc phat 2
#include<bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    for(int i = 1 ; i <= t ; i++)	// while(t--)
    {
        int n;
        cin >> n;
        queue<string> stk;
        stk.push("6");
        stk.push("8");
        string s = "";
        vector<string> a;
        while(s.size() <= n)
        {
            s = stk.front();
            stk.pop();
            stk.push(s + "6");
            stk.push(s + "8");
            a.push_back(s);
        }
        cout << a.size()-1 << endl;
        for(int j = 0 ; j < a.size()-1 ; j++)
            cout << a[j] << " ";
            
        cout << endl;
    }
    return 0;
}

//done
//ton qua nhieu bo nho

/* main()
{
    int t;
    cin >> t;
    for(int i = 1 ; i <= t ; i++)	// while(t--)
    {
        int n;
        cin >> n;
        queue<string> stk;
        stk.push("6");
        stk.push("8");
        string s = "";
        vector<string> a;
        while(s.size() <= n)
        {
            s = stk.front();
            stk.pop();
            stk.push(s + "6");
            stk.push(s + "8");
            a.push_back(s);
        }
        cout << a.size()-1 << endl;
        for(int j = 0 ; j < a.size()-1 ; j++)
            cout << a[j] << " ";
            
        cout << endl;
    }
    return 0;
}	*/
