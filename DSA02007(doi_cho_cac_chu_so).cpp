#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int k;
		string s;
		cin >> k >> s;	// k la so buoc nhieu nhat co the doi va chuoi s de xet duyet
		
		for(int i = 0 ; i < s.size() ; i++)// xet cac chu so tu dau den cuoi
		{
			char max= s[s.size() - 1];
			int pos = s.size()-1;
			
			for(int j = s.size()-1 ; j > i && k > 0 ; j--)  // duyet tu cuoi duyet lai de tim max lon nhat ke tu i+1 den cuoi chuoi s va max phai xa nhat
															// duyet tu cuoi duyet lai thi luon luon dam bao no xa nhat
			{
				if(max < s[j])
				{
					max = s[j];
					pos = j;
				}
			}
			
			if(max > s[i]  &&  k > 0)
			{
				swap(s[i] , s[pos]);
				k--;
			}
		}
		
		cout << s;
		cout << endl;
	}
	return 0;
}

//done
