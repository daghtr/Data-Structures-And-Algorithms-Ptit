#include<bits/stdc++.h>
using namespace std;
string s1, s2;
int d1[10005], d2[10005];
int convert(string s, bool ok)
{
    int sum = 0;
    if (ok) 
    {
        for (int i = 0 ; i < s.size() ; i++)
            sum = sum*10 + (s[i] - '0');
    }
    else
    {
        for (int i = s.size()-1 ; i >= 0 ; i--)
            sum = sum*10 + (s[i] - '0');
    }
    return sum;
}

void solution(string s, int d[])
{
    vector< pair<int, int> > vec;
    string heso = "";
    string somu = heso;
    for (int i = 0 ; i < s.size() ; i++)
    {
        if (s[i] == '*')
        {
            heso = "";
            for (int j = i-1 ; j >= 0 ; j--)
            {
                if (s[j] >= '0' && s[j] <= '9')
                    heso += s[j];
                else
                    break;
            }
        }
        else if(s[i] == '^')
        {
            somu = "";
            for (int j = i + 1 ; j < s.size() ; j++)
            {
                if (s[j] >= '0' && s[j] <= '9')
                    somu += s[j];
                else
                   break;
            }
            vec.push_back({convert(somu, true),convert(heso, false)});
        }
    }
    for (int i = 0 ; i < vec.size() ; i++)
        d[vec[i].first] = vec[i].second;
    
}
int main(int argc, const char * argv[])
{
    // insert code here...
    int t;
    cin >> t;
    while (t--)
    {
        getline(cin>>ws,s1);
        getline(cin>>ws,s2);
        memset(d1, 0, sizeof(d1));
        memset(d2,0,sizeof(d2));
        solution(s1,d1);
        solution(s2, d2);
        vector< pair<int, int> > res;
        for (int i = 0 ; i <= 10000 ; i++)
        {
            int kq = d1[i] + d2[i];
            if ( kq != 0)
                res.push_back({i,kq});
        }
        for (int i = res.size()-1 ; i >= 0 ; i--)
        {
            cout << res[i].second << "*" << "x" << "^" << res[i].first;
            if (i != 0)
                cout << " + ";
        }
        cout << endl;
    }
    return 0;
}


//c1 dung stack
//c2 nen dung hashmap vi stack lang nhang