// hoan vi xau ky tu
#include <bits/stdc++.h>
using namespace std;

void hoan_vi(string s, int l, int r)
{
    if(l == r)
    	cout << s << " ";
        
    else
    {
        for (int i = l; i <= r; i++)
        {

            swap(s[l], s[i]);

            hoan_vi(s, l+1, r);
        }
    }
}
 

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
    	cin >> s;
    	int n = s.length();
    	hoan_vi(s, 0, n-1);
    	cout << endl;
	}

    return 0;
}

// done
