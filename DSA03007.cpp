#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long a[n], b[n];
        for(int i = 0 ; i < n ; i++)
            cin >> a[i];

        int k;
        for(int i = 0 ; i < n-1 ; i++)
        {
            for(int j = i+1 ; j < n ; j++)
            {
                if(a[i] < a[j])
                {
                    k = a[i];
                    a[i] = a[j];
                    a[j] = k;
                }
            }
        }

        for(int i = 0 ; i < n ; i++)
            cin >> b[i];
        sort(b, b+n);

        long long sum = 0;
        for(int i = 0 ; i < n ; i++)
        {

            sum += a[i] * b[i];
        }
        cout << sum;
        cout << endl;
    }
    return 0;
}

//done

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
    {
		int n;
		cin >> n;
		vector<long long> a(n), b(n);

		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
		for(int i = 0 ; i < n ; i++)
			cin >> b[i];

		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), greater<int>());

		long long sum = 0;
		for(int i = 0 ; i < n ; i++)
			sum += a[i] * b[i];
		cout << sum << endl;
	}
	return 0;
}
*/


//done
