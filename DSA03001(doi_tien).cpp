#include<bits/stdc++.h>
using namespace std;


int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int n;

void doi_tien()
{
    int i = 9, count = 0;		// i=n-1
    cin >> n;
    while(n)
    {
        if(n >= a[i])
        {
            count++;
            n = n - a[i];
        }
        else 
			i--;
    }
    
    cout << count <<endl;
}
int main()
{
	int t;
    cin >> t;
    while(t--)
    {
    	doi_tien();
	}
	
    return 0;
}

//done
