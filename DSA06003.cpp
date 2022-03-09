#include<bits/stdc++.h>
using namespace std;

bool check(pair<int, int> i, pair<int, int> j)
{
    return i.first < j.first;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
        int n;
		cin >> n;
		vector<int> a(n);
        for(int i = 0 ; i < a.size() ; i++)
            cin >> a[i];
        
        int count = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int min = a[i];
            int tmp = i;
            for(int j = i+1 ; j < n ; j++)
            {
                if(a[j] < min)
                {
                    min = a[j];
                    tmp = j;
                }
            }
            if(tmp != i)
            {
                count++;
                swap(a[i], a[tmp]);
            }
        }
        cout << count << endl;
    }
	return 0;
}

//done
