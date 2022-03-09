// bien doi S-T
#include<bits/stdc++.h>
using namespace std;
struct data
{
    int value;
    int count;
};
int convert(int S, int T)
{
    set<int> a;
    a.insert(S);
    queue<data> q;
    q.push({S,0});
    while(!q.empty())
    {
        data temp = q.front();
        q.pop();
        if(temp.value == T)
            return temp.count;
        if(temp.value * 2 == T  ||  temp.value - 1 == T)
            return temp.count + 1;
        if(a.find(temp.value * 2) == a.end()  &&  temp.value < T)
        {
            q.push({temp.value * 2, temp.count + 1});
            a.insert(temp.value * 2);
        }
         if(a.find(temp.value - 1) == a.end()  &&  temp.value - 1)
         {
             q.push({temp.value - 1, temp.count +1 });
             a.insert(temp.value - 1);
         }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int S, T;
        cin >> S >> T;
        cout << convert(S,T) << endl;
    }
    
    return 0;
}

//done
