#include <iostream>
using namespace std;

int n, k, a[100], b[100], stop = 0, c;

void tap()
{
    int i = k;
    while(b[i] == n-k+i)
            i--;

    if(i == 0)
        stop = 1;
    else
    {
        b[i]++;
        for(int j = i+1 ; j <= k ; j++)
            b[j] = b [j-1] + 1;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int count = 0;
        for(int i = 1 ; i <= k ; i++)
        {
            cin >> b[i];
            a[i] = b[i];
        }
        tap();

        for(int i = 1 ; i <= k ; i++)
        {
            c = 1;
            for(int j = 1 ; j <= k ; j++)
                if(a[i] == b[j])
                {
                    c = 0;
                    break;
                }
            if(c)
                count++;
        }
        if(count == 0)
            count = k;
        cout << count << endl;
    }
    return 0;
}

//done
